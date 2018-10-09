import java.awt.Color;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.Rectangle;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;
import java.awt.image.ImageObserver;
import java.awt.image.ImageProducer;
import java.util.Date;
import java.util.Random;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;


/* Game                                                            */
/* author:  Edward Walsh                                           */
/* Aug 5 2010                                                      */
/*                                                                 */
/* Framework for a sprite game                                     */
/*                                                                 */
/* AGREEMENT:                                                      */
/* THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED  */
/* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED          */
/* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR      */
/* PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE CONTRIBUTORS BE   */
/* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,           */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,   */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND  */
/* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT         */
/* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING  */
/* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF  */
/* THE POSSIBILITY OF SUCH DAMAGE.                                 */
/* When the Program is made available in source code form:         */
/* a) it must be made available under this Agreement; and          */
/* b) a copy of this Agreement must be included with each copy of  */
/* the Program.                                                    */
/* The Modifications that You create or to which You contribute    */
/* are governed by the terms of this Agreement. You may not remove */
/* or alter this Agreement.                                        */
/*                                                                 */


/**
 * Framework for a sprite game.
 * <p>
 * <pre>
 * This framework includes:
 * A method that is invoked every time the screen is painted.
 * Clock that invokes repaint 15 times every second
 * Methods to query the pressed state of the following keyboard keys:
 *     up arrow key
 *     down arrow key
 *     left arrow key
 *     right arrow key
 *     space bar
 * Method to create random numbers
 *
 * Instructions:
 * Use the Graphics context g, in paintFrame(),
 * to paint the current frame in your game.
 *
 * EXAMPLE:
 * //Type your variable declarations here
 * Image image = new ImageIcon("image.gif").getImage();
 * int x = 0;
 * int y = 0;
 * public void initializeSprites(){
 *     //type your sprite initialization code here
 * }
 * public void paintFrame(Graphics g) {
 *       if (isRightArrowPressed()) x=x+10;
 *       if (isLeftArrowPressed()) x=x-10;
 *       if (isUpArrowPressed()) y=y-10;
 *       if (isDownArrowPressed()) y=y+10;
 *       g.drawImage(image,x,y,this);
 *       if (isMouseClicked()) {
 *           int x = getMouseX();
 *           int y = getMouseY();
 *       }
 *   }
 * </pre>
 * <p>
 *
 */
class Game extends JFrame {

    /* Type your variable declarations here */

	// initial setup
	int timeDelayStart = 30;
	int timeDelay = timeDelayStart;
	int score = 0;
	
	// use a String array to hold the file name of every card in the deck
	String whatCard[] = {
		"c1.gif",
		"c10.gif",
		"c2.gif",
		"c3.gif",
		"c4.gif",
		"c5.gif",
		"c6.gif",
		"c7.gif",
		"c8.gif",
		"c9.gif",
		"cj.gif",
		"ck.gif",
		"cq.gif",
		"d1.gif",
		"d10.gif",
		"d2.gif",
		"d3.gif",
		"d4.gif",
		"d5.gif",
		"d6.gif",
		"d7.gif",
		"d8.gif",
		"d9.gif",
		"dj.gif",
		"dk.gif",
		"dq.gif",
		"ec.gif",
		"h1.gif",
		"h10.gif",
		"h2.gif",
		"h3.gif",
		"h4.gif",
		"h5.gif",
		"h6.gif",
		"h7.gif",
		"h8.gif",
		"h9.gif",
		"hj.gif",
		"hk.gif",
		"hq.gif",
		"jb.gif",
		"jr.gif",
		"s1.gif",
		"s10.gif",
		"s2.gif",
		"s3.gif",
		"s4.gif",
		"s5.gif",
		"s6.gif",
		"s7.gif",
		"s8.gif",
		"s9.gif",
		"sj.gif",
		"sk.gif",
		"sq.gif"
	};
	
	int xCoordinates[] = {10, 110, 210, 310};
	int yCoordinates[] = {50, 200, 350};
	int pair1, pair2, pair3, pair4, pair5, pair6; // Used to hold random numbers in memory for reuse
	
		
	Sprite cards[] = new Sprite[] {
		new Sprite(new ImageIcon(whatCard[pair1 = randomNumber(0, 53)]).getImage(), xCoordinates[0], yCoordinates[0]),
		new Sprite(new ImageIcon(whatCard[pair2 = randomNumber(0, 53)]).getImage(), xCoordinates[1], yCoordinates[0]),
		new Sprite(new ImageIcon(whatCard[pair3 = randomNumber(0, 53)]).getImage(), xCoordinates[2], yCoordinates[0]),
		new Sprite(new ImageIcon(whatCard[pair4 = randomNumber(0, 53)]).getImage(), xCoordinates[3], yCoordinates[0]),
		new Sprite(new ImageIcon(whatCard[pair5 = randomNumber(0, 53)]).getImage(), xCoordinates[0], yCoordinates[1]),
		new Sprite(new ImageIcon(whatCard[pair6 = randomNumber(0, 53)]).getImage(), xCoordinates[1], yCoordinates[1]),
		new Sprite(new ImageIcon(whatCard[pair1]).getImage(), xCoordinates[2], yCoordinates[1]),
		new Sprite(new ImageIcon(whatCard[pair2]).getImage(), xCoordinates[3], yCoordinates[1]),
		new Sprite(new ImageIcon(whatCard[pair3]).getImage(), xCoordinates[0], yCoordinates[2]),
		new Sprite(new ImageIcon(whatCard[pair4]).getImage(), xCoordinates[1], yCoordinates[2]),
		new Sprite(new ImageIcon(whatCard[pair5]).getImage(), xCoordinates[2], yCoordinates[2]),
		new Sprite(new ImageIcon(whatCard[pair6]).getImage(), xCoordinates[3], yCoordinates[2])		
	};
	
	
	// Instantiate Concentration Object
	Concentration conObject = new Concentration(cards);
	
	// Track how many cards are in play:
	int numOfCards = cards.length;
	
	
	public void initializeSprites(){
		//type your sprite initialization code here
	}

    /**
     * paint the current frame of the game
     * @param g handle to the screen
     */


	 // reset method for Concentration:
	 
    public void paintFrame(Graphics g) {
		

	// Do all this every 1/15th of a second:

	if (numOfCards < 1) {
		g.setFont(new Font("Impact", Font.BOLD, 48));
		g.drawString("YOU WIN!", 75, 200);
		return;
	}
	
	// Draw Cards
	conObject.paintComponent(g);
	
	// Check for two or more cards being face up, if so, start here:
	if (conObject.numberOfFaceUpCards() > 1) {

		// If two or more cards are face up, do they match?
		if (conObject.doAllFaceUpCardsMatch()) {

			// Now if two or more cards are face up, and they match,
			// AND the timeDelay counter is less than 1,
			// turn face up cards invisible, and decrement
			// the visible card tracker.
			if (timeDelay < 1) {
				conObject.makeAllFaceUpCardsInvisible();
				numOfCards -= 2;
				
				// flip everything face down, reset timeDelay,
				// and exit the loop.
				conObject.flipAllCardsFaceDown();
				timeDelay = timeDelayStart;
				return;
			}
			
			// If two or more cards are face up, and they match,
			// but timeDelay isn't down to 0 yet, decrement timeDelay,
			// and exit the loop.
			timeDelay--;
			return;
		}
		
		// if two or more cards are face up, but they do NOT match,
		// AND the timeDelay is less than 1, do this:
		if (timeDelay < 1) {
			conObject.flipAllCardsFaceDown();
			timeDelay = timeDelayStart;
		}
		
		// If two or more cards are face up, but they don't match,
		// and timeDelay is NOT less than 1, decrement timeDelay,
		// and exit the loop.
		timeDelay--;
		return;
	}// If there are less than 2 cards face up, continue here:
	
	// Check if a card has been clicked on, if so, turn it face up.
	conObject.ifMouseIsClickedOnCardThenFlipCardFaceUp();
		
    }/* public void paintFrame(Graphics g) */

	 //==========================================================================
	 //========================= concentration ==================================
	 //==========================================================================

    /**
     * Some useful methods that are needed to write the card game concentration
     * @author Edward Walsh
     *
     */

    public class Concentration {
    	
    	/** Array of cards */
    	protected Card cards[] = null;
    	
    	/**
    	 * Constructor
    	 * @param sprites array of Sprites
    	 */
    	public Concentration(Sprite sprites[]) {    	
    		
    		/* convert each Sprite into a Card */
    		this.cards = new Card[sprites.length];
    		for (int i=0; i<sprites.length; i++) {
    			cards[i] = new Card(sprites[i].image, sprites[i].x, sprites[i].y);
    		}
    		
    		/* shuffle the cards */
    		shuffleCards();
    	}
    
    	
    	/**
    	 * Reset all cards.
    	 * Flip all cards face down
    	 * and make all cards visible.
    	 */
    	public void resetAllCards() {
    		shuffleCards();
    		for (int i=0; i<this.cards.length; i++) {
    			Card card = cards[i];
    			card.visible = true;
    			card.flipFaceDown();
    		}
    	}
    	
    	
    	/**
    	 * Shuffle the cards
    	 */
		protected void shuffleCards() {
			
			/* Get the (x,y) coordinates of all the cards */
			java.util.Vector<java.awt.Point> coordinates = new java.util.Vector<java.awt.Point>();
			for (int i=0; i<this.cards.length; i++) {
				coordinates.add(new java.awt.Point(this.cards[i].x, this.cards[i].y));
			}
			
			/* shuffle the (x,y) coordinates */
			java.util.Collections.shuffle(coordinates);
			
			/* replace the (x,y) coordinates of the cards with the shuffled coordinates */
			for (int i=0; i<this.cards.length; i++) {
				this.cards[i].x = coordinates.get(i).x;
				this.cards[i].y = coordinates.get(i).y;
			}			
		}
		
		/**
		 * If the mouse is clicked on a card then flip the card face up.
		 */
		public void ifMouseIsClickedOnCardThenFlipCardFaceUp() {
			
			/* if the player did not click the mouse, then do nothing */
			if (Game.this.isMouseClicked()==false) return;
			
			/* for each and every card                                           */
			/*   if the mouse is clicked on the card, then flip the card face up */
			for (int i=0; i<this.cards.length; i++) {
				Card card = this.cards[i];
				if (card.contains(Game.this.getMouseX(), Game.this.getMouseY())==false) continue;
				card.flipFaceUp();
			}
		}

		

		/** 
		 * Get the number of cards that are visible and that are face up.
		 * @return the number of cards that are visible and that are face up. 
		 */
		public int numberOfFaceUpCards() {
			java.util.Vector<Card> flippedUpCards = getAllFaceUpCards();
			return(flippedUpCards.size());
		}
		
		/**
		 * Do all cards, that are visible and that are face up, match.
		 * <p>
		 * <pre>
		 * SCENARIOS:
		 * if no cards are face up, then return true.
		 * If one card is face up, then return true.
		 * If the King of Hearts is face up 
		 *     and if the Ace of Spades is face up
		 *     then return false.
		 * If the King of Hearts is face up
		 *     and if another King of Hearts is face up
		 *     then return true.
		 * </pre>
		 * <p>
		 * @return True if we have a match on all visible and face up cards.
		 */
		public boolean doAllFaceUpCardsMatch() {
			
			/* Get all cards that are visible and face up */
			java.util.Vector<Card> flippedUpCards = getAllFaceUpCards();
			
			/* if no cards are visible and face up, then return true */
			if (flippedUpCards.size()==0) return(true);
			
			/* if only one card is visible and face up, then return true */
			if (flippedUpCards.size()==1) return(true);
			
			/* for each card that is visible and face up                               */
			/*    if the card does not match the first face-up card, then return false  */
			for (int i=1; i<flippedUpCards.size(); i++) {
				if (flippedUpCards.get(0).match(flippedUpCards.get(i))==false) return(false);
			}
			
			/* We have a match on all visible and face up cards */
			return(true);
			
		}
	
		/**
		 * Get all cards that are visible and face up.
		 * @return all cards that are visible and face up
		 */
		protected java.util.Vector<Card> getAllFaceUpCards() {
			
			/* This is where we will store our visible and faceup cards */
			java.util.Vector<Card> flippedUpCards = new java.util.Vector<Card>();
			
			/* for each and every card                                */
			/*    if card is visible and is face up                   */
			/*        add the card to our collection of face-up cards */
			for (int i=0; i<this.cards.length; i++) {
				Card card = this.cards[i];
				if ((card.visible) && (card.faceUp)) {
					flippedUpCards.add(card);
				}
			}
			
			/* return all of the cards that are visible and face up */
			return(flippedUpCards);
		}
		
		
		/**
		 * Flip all cards face down
		 */
		public void flipAllCardsFaceDown() {
			for (int i=0; i<this.cards.length; i++) {
				cards[i].flipFaceDown();
			}
		}
	
		
		/**
		 * Make all face-up cards invisible
		 */
		public void makeAllFaceUpCardsInvisible() {
			for (int i=0; i<this.cards.length; i++) {
				if (cards[i].isFaceUp()) {
					cards[i].visible = false;
				}
			}
		}
		
		
		/**
		 * Render the card on the screen
		 * @param g Graphics Objecrt
		 */
		public void paintComponent(Graphics g) {
			for (int i=0; i<this.cards.length; i++) {
				this.cards[i].paintComponent(g);
				//if (this.cards[i].isFaceUp()) {
				//    g.drawString(this.cards[i].md5Sum, 0, 300+i*20);
				//}
			}
		}
		/**
		 * Card class
		 * @author Edward Walsh
		 */
	    public class Card extends Sprite {
	    	
	    	/* Each face-up image has an md5Sum                        */
	    	/* We use the md5Sum to compare images of different cards. */
	    	public String md5Sum = "";
	    	
	    	/* The face-up image of the card */
	    	public Image imageFaceUp = null;
	    	
	    	/* The face-down image of the card */
	    	public Image imageFaceDown = null;
	    	
	    	/* Is the card face up or face down? */ 
	    	protected boolean faceUp = true;
	    	
	    	/** 
	    	 * Is the card face up?
	    	 * @return True if the card is face up
	    	 */
	    	public boolean isFaceUp() {
	    		return(faceUp);
	    	}
	    	
	    	/**
	    	 * Is the card face down?
	    	 * @return True if the card is face down
	    	 */
	    	public boolean isFaceDown() {
	    		return(!faceUp);
	    	}
	    	
	    	/**
	    	 * Flip the card face up.
	    	 */
	    	public void flipFaceUp() {
	    		faceUp = true;
	    	}
	    	
	    	/**
	    	 * Flip the card face down.
	    	 */
	    	public void flipFaceDown() {
	    		faceUp = false;
	    	}
	    	
	    	
	    	/**
	    	 * Get the pixels in the face-up image.
	    	 * @return The pixels in the face-up image.
	    	 */
	    	protected int[] getPixels() {
	    		int width = this.imageFaceUp.getWidth(Game.this);
	    		int height = this.imageFaceUp.getWidth(Game.this);
	    		int[] pixels = new int[width * height];
	    		java.awt.image.PixelGrabber pixelGrabber = 
	    		    new java.awt.image.PixelGrabber(image,0,0,width,height,pixels,0,width);
	    		try {
	    		   pixelGrabber.grabPixels();
	    		}
	    		catch (InterruptedException e){}
	    		return(pixels);
	    	}
	    	
	    	/**
	    	 * Get the MD5 sum of the pixels in the face-up image.
	    	 * @return the MD5 sum of the card.
	    	 */
	    	public String getMd5Sum() {
	    		
	    		/* get the pixels that are in the card's face-up image */
	    		int pixels[] = getPixels();
	    		
	    		/* The pixels are stored as integers.         */
	    		/* We need to convert the integers into bytes */
	    		byte bytes[] = new byte[pixels.length*4];
	    		for (int i=0; i<pixels.length; i++) {
	    		    byte fourBytes[] = java.nio.ByteBuffer.allocate(4).putInt(pixels[i]).array();
	    		    int index = i*4;
	    		    bytes[index] = fourBytes[0];
	    		    bytes[index+1] = fourBytes[1];
	    		    bytes[index+2] = fourBytes[2];
	    		    bytes[index+3] = fourBytes[3];
	    		}
	    		

	    		try {
		    		/* Compute the MD5 byte array for the pixles (which have been converted to bytes) */
					java.security.MessageDigest complete = java.security.MessageDigest.getInstance("MD5");
					byte digestBytes[] = complete.digest(bytes);
					
					/* Convert the md5 byte array into a md5 string */
				    String md5Sum = "";
				    for (int i=0; i < digestBytes.length; i++) {
				           md5Sum += Integer.toString( ( digestBytes[i] & 0xff ) + 0x100, 16).substring( 1 );
				    }
				       
				    /* return the string that holds the MD5 sum */
				    return md5Sum;
				} catch (Exception e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
					return("");
				}	    			    			    		
	    	}
	    	
	    	public void testMd5SumsForUniqueness() {	    			    		
	    		String suits[] = new String[]{"h","d","s","c"};
	    		String ranks[] = new String[]{"1","2","3","4","5","6","7","8","9","10","j","q","k"};
	    		java.util.Hashtable<String,String> md5Sums = new java.util.Hashtable<String,String>();
	    		for (int s=0; s<suits.length; s++) 
	    		for (int r=0; r<ranks.length; r++){
	    			String filename = suits[s]+ranks[r]+".gif";
	    			Card card = new Card(new ImageIcon("imagesOfCards/"+filename).getImage(),0,0);
	    			String md5Sum = card.md5Sum;
	    			if (md5Sum.equals("")) {
	    				System.out.println("ERROR on " + filename);
	    			}
	    			if (md5Sums.containsKey(md5Sum)) {
	    				System.out.println("ERROR on " + filename + ".  Matches " + md5Sums.get(md5Sum));
	    			}
	    			md5Sums.put(md5Sum, filename);
	    		}    		
	    		System.out.println("number of cards is " + md5Sums.size());	    		
	    	}
	    	
	    	
	    	/**
	    	 * Do 2 cards match.
	    	 * Two cards match if they have the same rank and suit.
	    	 * @param card is the input argument a card 
	    	 * that has the same rank and suit as this card?
	    	 * @return True if the input argument is a card
	    	 * that has the same rank and suit as this card.
	    	 */
	    	public boolean match(Card card) {
	    		return (this.md5Sum.equals(card.md5Sum));
	    	}
	    	
	    	
	    	/**
	    	 * Constructor
	    	 * @param image Face-up image of the card
	    	 * @param x The x coordinate of the card
	    	 * @param y The y coordinate of the card
	    	 */
	    	public Card(Image image, int x, int y) {
	    		super(image,x,y);
	    		this.imageFaceUp = image;
	    		this.imageFaceDown = new ImageIcon("b1fv.gif").getImage();
	    		flipFaceDown();
	    		this.md5Sum = this.getMd5Sum();
	    	}
	    	
	    	/**
	    	 * Paint the card on the screen
	    	 * @param g The graphics handle
	    	 */
	    	public void paintComponent(Graphics g) {
	    		if (this.visible==false) return;
	    		if (faceUp) {
	    			g.drawImage(imageFaceUp,x,y,Game.this);
	    		} else {
	    		    g.drawImage(imageFaceDown,  x,  y, Game.this);
	    		}
	    	}
	    }//Card
    }//Concentration    
    
    public class GlidingSprite extends Sprite {
    	   protected int xSpeed;
    	   protected int ySpeed;
    	   protected String doWhatWhenAtEdgeOfGameBoard;
    	   protected String doWhatWhenPastEdgeOfGameBoard;
    	   public static final String STOP = "STOP";
    	   public static final String BOUNCE = "BOUNCE";
    	   public static final String DISAPPEAR = "DISAPPEAR";
    	   public static final String REAPPEAR_ON_OPPOSITE_EDGE = "REAPPEAR ON OPPOSITE EDGE";
    	   public static final String DO_NOTHING = "DO NOTHING";

    	  public GlidingSprite(Image image, int x, int y){
    	      super(image, x, y);
    	  }

    	  public void setSpeed(int xSpeed, int ySpeed){
    	      this.xSpeed = xSpeed;
    	  }

    	  public int getXSpeed( ){
    	      return(this.xSpeed);
    	  }

    	  public int getYSpeed( ){
    	      return(this.ySpeed);
    	  }

    	  public void setDoWhatWhenAtEdgeOfGameBoard(String doWhat){
    	      this.doWhatWhenAtEdgeOfGameBoard = doWhat;
    	  }

    	  public String getDoWhatWhenAtEdgeOfGameBoard( ){
    	      return(this.doWhatWhenAtEdgeOfGameBoard);
    	  }

    	  public void setDoWhatWhenPastEdgeOfGameBoard(String doWhat){
    	      this.doWhatWhenPastEdgeOfGameBoard = doWhat;
    	  }

    	  public String getDoWhatWhenPastEdgeOfGameBoard( ) {
    	      return(this.doWhatWhenPastEdgeOfGameBoard);
    	  }

    	  public void paintComponent(Graphics g) {
    	      if (this.visible==false) return;
    	      g.drawImage(this.image, this.x, this.y, null);
    	  }
    	}//GlidingSprite
    
    /**
     * Simple Sprite class
     * that contains the properties
     * image, x, y, width, height
     * and that contains the method
     * boolean intersects(Sprite sprite)
     * <p>
     * <pre>
     * EXAMPLE CODE:
     * Sprite sprite = new Sprite(new ImageIcon("image.gif").getImage(), 111, 222);
     * g.drawImage(sprite.image, sprite.x, sprite.y, null);
     * </pre>
     * <p>
     *
     */
    public class Sprite extends Rectangle {
        public Image image = null;        
        public boolean visible  = true;
        public Sprite(Image image, int x, int y) {
            super(x,y,image.getWidth(null),image.getHeight(null));
            this.image = image;        
        }
        public void paintComponent(Graphics g) {
            if (this.visible==false) return;
            g.drawImage(this.image, this.x, this.y, null);
        }
    }//Sprite    

    /**
     * Update the sprite.
     * <p>
     * <pre>
     * If the sprite is moving,then move the sprite to its next position.
     * If the sprite is at the edge of the game board
     *    then examine sprite's doWhatWhenAtEdgeOfGameBoard property:
     *    if DO_NOTHING then we do nothing
     *    if STOP then we stop the sprite
     *    if BOUNCE then we bounce the sprite
     *    if DISAPPEAR then the sprite disappears
     *    if REAPPEAR_ON_OPPOSITE_EDGE then make the sprite appear on the opposite edge
     * If the sprite is past the edge of the game board
     *    then examine sprite's doWhatWhenPastEdgeOfGameBoard property:
     *    if DO_NOTHING then we do nothing
     *    if STOP then we stop the sprite
     *    if BOUNCE then we bounce the sprite
     *    if DISAPPEAR then the sprite disappears
     *    if REAPPEAR_ON_OPPOSITE_EDGE then make the sprite appear on the opposite edge
     * </pre>
     * <p>
     * @param g The Graphics context
     * @param sprite The sprite we are updating
     */
    public void paintGlidingSprite(Graphics g, GlidingSprite sprite) {

    	/* move the sprite to its next position */
    	sprite.x = sprite.x + sprite.xSpeed;
    	sprite.y = sprite.y + sprite.ySpeed;

    	/* if the sprite is past the edge of the game board */
    	if (isSpritePastEdgeOfGameBoard(sprite)) {

    		/* if the sprite's doWhatWhenPastEdgeOfGameBoard is DO_NOTHING */
    		/* then we do nothing                                          */
    		if (sprite.doWhatWhenPastEdgeOfGameBoard.equals(sprite.DO_NOTHING)) {

    		}

    		/* if the sprite's doWhatWhenPastEdgeOfGameBoard is STOP       */
    		/* then stop moving the sprite                                 */
    		else if (sprite.doWhatWhenPastEdgeOfGameBoard.equals(sprite.STOP)) {
    			sprite.xSpeed = 0;
    			sprite.ySpeed = 0;
    		}

    		/* if the sprite's doWhatWhenPastEdgeOfGameBoard is BOUNCE     */
    		/* then bounce the sprite off the edge                         */
    		else if (sprite.doWhatWhenPastEdgeOfGameBoard.equals(sprite.BOUNCE)) {

    			/* reverse direction */
    			if (sprite.x < 0 - sprite.width) sprite.xSpeed = Math.abs(sprite.xSpeed);
    			else if (sprite.x >= gameboard.getWidth()) sprite.xSpeed = 0 - Math.abs(sprite.xSpeed);
    			if (sprite.y <= 0 - sprite.height) sprite.ySpeed = Math.abs(sprite.ySpeed);
    			else if (sprite.y >= gameboard.getHeight()) sprite.ySpeed = 0 - Math.abs(sprite.ySpeed);
    			
    		}

    		/* if the sprite's doWhatWhenPastEdgeOfGameBoard is DISAPPEAR */
    		/* then make the sprite invisible                             */
    		else if (sprite.doWhatWhenPastEdgeOfGameBoard.equals(sprite.DISAPPEAR)) {
    			sprite.visible = false;
    		}

    		/* if the sprite's doWhatWhenPastEdgeOfGameBoard is REAPPEAR_ON_OPPOSITE_EDGE */
    		/* then move the sprite to the opposite end of the game board                 */
    		else if (sprite.doWhatWhenPastEdgeOfGameBoard.equals(sprite.REAPPEAR_ON_OPPOSITE_EDGE)) {
    			if (sprite.x < 0 - sprite.width) sprite.x = gameboard.getWidth();
    			else if (sprite.x >= gameboard.getWidth()) sprite.x = 0 - sprite.width;
    			if (sprite.y <= 0 - sprite.height) sprite.y = gameboard.getHeight();
    			else if (sprite.y >= gameboard.getHeight()) sprite.y = 0 - sprite.height;
    		}
    	}


    	/* if the sprite is past the edge of the game board */
    	if (isSpriteAtEdgeOfGameBoard(sprite)) {

    		/* if the sprite's doWhatWhenAtEdgeOfGameBoard is DO_NOTHING */
    		/* then we do nothing                                          */
    		if (sprite.doWhatWhenAtEdgeOfGameBoard.equals(sprite.DO_NOTHING)) {

    		}

    		/* if the sprite's doWhatWhenAtEdgeOfGameBoard is STOP       */
    		/* then stop moving the sprite                                 */
    		else if (sprite.doWhatWhenAtEdgeOfGameBoard.equals(sprite.STOP)) {
    			sprite.xSpeed = 0;
    			sprite.ySpeed = 0;
    		}
    		    		
    		
    		/* if the sprite's doWhatWhenAtEdgeOfGameBoard is BOUNCE     */
    		/* then bounce the sprite off the edge                       */    		
    		else if (sprite.doWhatWhenAtEdgeOfGameBoard.equals(sprite.BOUNCE)) {
                /* reverse direction */
    			if (sprite.x <= 0) sprite.xSpeed = Math.abs(sprite.xSpeed);
    			else if (sprite.x >= gameboard.getWidth()-sprite.width) sprite.xSpeed = 0 - Math.abs(sprite.xSpeed);
    			if (sprite.y <= 0) sprite.ySpeed = Math.abs(sprite.ySpeed);
    			else if (sprite.y >= gameboard.getHeight()-sprite.height) sprite.ySpeed = 0 - Math.abs(sprite.ySpeed);
    			
    			/* don't let sprite go past edge */
    			if (sprite.x <= 0) sprite.x = 0;
    			else if (sprite.x >= gameboard.getWidth()-sprite.width) sprite.x = gameboard.getWidth() - sprite.width; 
    			if (sprite.y <= 0) sprite.y = 0;
    			else if (sprite.y >= gameboard.getHeight()-sprite.height) sprite.y = gameboard.getHeight() - sprite.height; 
    		}

    		/* if the sprite's doWhatWhenAtEdgeOfGameBoard is DISAPPEAR */
    		/* then make the sprite invisible                             */
    		else if (sprite.doWhatWhenAtEdgeOfGameBoard.equals(sprite.DISAPPEAR)) {
    			sprite.visible = false;
    		}

    		/* if the sprite's doWhatWhenPastEdgeOfGameBoard is REAPPEAR_ON_OPPOSITE_EDGE */
    		/* then move the sprite to the opposite end of the game board                 */
    		else if (sprite.doWhatWhenAtEdgeOfGameBoard.equals(sprite.REAPPEAR_ON_OPPOSITE_EDGE)) {
    			if (sprite.x <= 0) sprite.x = gameboard.getWidth() - sprite.width;
    			else if (sprite.x >= gameboard.getWidth()-sprite.width) sprite.x = 0;
    			if (sprite.y <= 0) sprite.y = gameboard.getHeight() - sprite.height;
    			else if (sprite.y >= gameboard.getHeight()-sprite.height) sprite.y = 0;
    		}
    	}

    	/* render the sprite   */
    	sprite.paintComponent(g);
    }

    /**
     * Is a sprite touching or past the edge of the game board?
     * <p>
     * EXAMPLE: <br>
     * If the sprite is to the left of the game board's right edge,
     * then return false. <br>
     * If any part of the sprite is touching the game board's right edge,
     * then return true. <br>
     * If the sprite is to the right of the game board's right edge, then return true.
     * @param sprite The sprite we are checking
     * @return True if the sprite is touching or is past the edge of the game board.
     */
    public boolean isSpriteAtEdgeOfGameBoard(Sprite sprite) {
    	if (sprite.x < 0) return(true);
    	if (sprite.x + sprite.width > this.gameboard.getWidth()) return(true);
    	if (sprite.y < 0) return(true);
    	if (sprite.y + sprite.height > this.gameboard.getHeight()) return(true);
    	return(false);
    }

    /**
     *
     * <p>
     * <p>
     * EXAMPLE: <br>
     * If the sprite is to the left of the game board's right edge,
     * then return false. <br>
     * If any part of the sprite is touching the game board's right edge,
     * then return false. <br>
     * If the sprite is to the right of the game board's right edge, then return true.
     * @param sprite The sprite we are checking
     * @return True if the sprite is touching or is past the edge of the game board.
     */
    public boolean isSpritePastEdgeOfGameBoard(Sprite sprite) {
    	if (sprite.x+sprite.width < 0) return(true);
    	if (sprite.x > this.gameboard.getWidth()) return(true);
    	if (sprite.y+sprite.height < 0) return(true);
    	if (sprite.y > this.gameboard.getHeight()) return(true);
    	return(false);
    }

    /**
     * is the up arrow pressed?
     * @return true or false
     */
    public synchronized boolean isUpArrowPressed() {
        return(upArrowPressed);
    }

    /**
     * is the down arrow pressed?
     * @return true or false
     */
    public synchronized boolean isDownArrowPressed() {
        return(downArrowPressed);
    }

    /**
     * is the left arrow pressed?
     * @return true or false
     */
    public synchronized boolean isLeftArrowPressed() {
        return(leftArrowPressed);
    }

    /**
     * is the right arrow pressed?
     * @return true or false
     */
    public synchronized boolean isRightArrowPressed() {
        return(rightArrowPressed);
    }

    /**
     * is the space bar pressed?
     * @return true or false
     */
    public synchronized boolean isSpaceKeyPressed() {
        return(spaceKeyPressed);
    }

    /**
     * Get the x coordinate of the mouse
     * @return x coordinate of the mouse
     */
    public synchronized int getMouseX() {
    	return(this.mouseX);
    }

    /**
     * Get the y coordinate of the mouse
     * @return y coordinate of the mouse
     */
    public synchronized int getMouseY() {
    	return(this.mouseY);
    }

    /**
     * Is the mouse clicked?
     * @return true if the mouse is clicked.
     */
    public synchronized boolean isMouseClicked() {
    	return(this.bufferedMouseClicked);
    }

    /**
     * Generate a random number between a minimum number and a maximum number.
     * @param minNumber The smallest number that can be generated.
     * @param maxNumber The largest number that can be generated.
     * @return A number between the minimum number and the maximum number.
     */
    public int randomNumber(int minNumber, int maxNumber) {
        if (minNumber==maxNumber) return(minNumber);
        if (minNumber>maxNumber) {
            int temp = minNumber;
            minNumber = maxNumber;
            maxNumber = temp;
        }
        return(minNumber+(int)(Math.floor(Math.random()*(double)(maxNumber-minNumber+1))));
    }//randomNumber

    /** The panel where all of the game's images are rendered */
    GameBoard gameboard = null;


    /** Is the up arrow key pressed? */
    boolean upArrowPressed = false;

    /**
     * Set the state of the up arrow key.
     * @param upArrowPressed Set to true if the up arrow key is pressed.
     * Set to false if the the up arrow key is not pressed.
     */
    public synchronized void setUpArrowPressed(boolean upArrowPressed) {
        this.upArrowPressed = upArrowPressed;
    }//setUpArrowPressed

    /** Is the down arrow key pressed? */
    boolean downArrowPressed = false;

    /**
     * Set the state of the down arrow key.
     * @param upArrowPressed Set to true if the down arrow key is pressed.
     * Set to false if the the down arrow key is not pressed.
     */
    public synchronized void setDownArrowPressed(boolean downArrowPressed) {
        this.downArrowPressed = downArrowPressed;
    }//setDownArrowPressed

    /** Is the left arrow key pressed? */
    boolean leftArrowPressed = false;

    /**
     * Set the state of the left arrow key.
     * @param upArrowPressed Set to true if the left arrow key is pressed.
     * Set to false if the the left arrow key is not pressed.
     */
    public synchronized void setLeftArrowPressed(boolean leftArrowPressed) {
        this.leftArrowPressed = leftArrowPressed;
    }//setLeftArrowPressed

    /** Is the right arrow key pressed? */
    boolean rightArrowPressed = false;

    /**
     * Set the state of the right arrow key.
     * @param upArrowPressed Set to true if the right arrow key is pressed.
     * Set to false if the the right arrow key is not pressed.
     */
    public synchronized void setRightArrowPressed(boolean rightArrowPressed) {
        this.rightArrowPressed = rightArrowPressed;
    }//setRightArrowPressed

    /** Is the space bar pressed? */
    boolean spaceKeyPressed = false;

    /**
     * Set the state of the space bar.
     * @param upArrowPressed Set to true if the space bar is pressed.
     * Set to false if the the space bar is not pressed.
     */
    public synchronized void setSpaceKeyPressed(boolean spaceKeyPressed) {
        this.spaceKeyPressed = spaceKeyPressed;
    }//setSpaceKeyPressed

    /** x coordinate of the mouse */
    int mouseX = 0;

    /**
     * Set the x coordinate of the mouse
     * @param x x coordinate of the mouse
     */
    public synchronized void setMouseX(int x) {
    	this.mouseX = x;
    }

    /** y coordinate of the mouse */
    int mouseY = 0;

    /**
     * Set the y coordinate of the mouse
     * @param y y coordinate of the mouse
     */
    public synchronized void setMouseY(int y) {
    	this.mouseY = y;
    }

    /** Is the mouse clicked? */
    boolean bufferedMouseClicked = false;

    /**
     * Set to true if the mouse is clicked.
     * @param clicked is true if the mouse is clicked.
     */
    public synchronized void setBufferedMouseClicked(boolean clicked) {
    	this.bufferedMouseClicked = clicked;
    }

    /** Is the mouse clicked? */
    boolean rawMouseClicked = false;

    /**
     * Set to true if the mouse is clicked.
     * @param clicked is true if the mouse is clicked.
     */
    public synchronized void setRawMouseClicked(boolean clicked) {
    	this.rawMouseClicked = clicked;
    }

    /**
     * Is the mouse clicked?
     * @return true if the mouse is clicked.
     */
    public synchronized boolean isRawMouseClicked() {
    	return(this.rawMouseClicked);
    }

    /**
     * Constructor for the game.
     * <p>
     * <pre>
     * The following tasks are performed:
     * a frame is displayed on the screen
     * a clock is created; the clock invoked repaint 15 times per second
     * a keyboard listener listens for presses of the arrow keys & space bar
     * </pre>
     * <p>
     */
    public Game() {

        /* how large is the window? */
        setSize(450, 550);

        /* if the end-user clicks on the x in the upper right corner, */
        /* close this app                                             */
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        /* allow the window to receive the focus; */
        /* we want this window to see key presses */
        setFocusable(true);

        /* this window can receive keyboard events */
        addKeyListener(new MyKeyListener());

        /* make the window visible */
        setVisible(true);

        /* add MyPanel to the window */
        setLayout(new GridLayout(1,1));
        gameboard = new GameBoard();
        add(gameboard);

        validate();

    }//Game

    /**
     * Panel that displays all the graphics in the game.
     * <p>
     * Why do I need a panel--why can't I display the graphics in the frame?
     * I want to the top of the graphics area to be at y=0.
     * <p>
     * Offscreen buffers are used to create a rock-solid animation that does not blink.
     * <p>
     * Focus is given to the panel so that the panel can listen for key presses.
     * <p>
     * The clock invokes repaint 15 times per second.
     */
    public class GameBoard extends JPanel {

        /** offscreen buffers are used to create a rock-solid animation that does not blink */
        protected Image offscreenImage = null;
        /** offscreen buffers are used to create a rock-solid animation that does not blink */
        protected Graphics offscreenGraphics = null;

        /**
         * Constructor for the main panel in this game;
         * all of the graphics are displayed on this panel.
         * <p>
         * <pre>
         * Focus is given to the panel so that the panel can listen for key pressed.
         * NOTE:  Focus determines who receives the characters that are typed on the keyboard--
         * the entity that has the focus receives the characters.
         * A keyboard listener is created to listen for key pressed.
         * A clock is created; the clock invokes repaint 15 times per second.
         * </pre>
         * <p>
         */
        public GameBoard() {
            /* allow this panel to get the focus */
            setFocusable(true);
            /* give this panel the focus */
            requestFocus();
            /* Now that this panel has the focus, this panel can receive keyboard events */
            addKeyListener(new MyKeyListener());
            /* this window can receive mouse motion events */
            addMouseMotionListener(new MyMouseMotionListener());
            /* this window can receive mouse events */
            addMouseListener(new MyMouseListener());
            /* start a clock that invokes repaint 15 times per second */
            new ThreadClock().start();
        }//MyPanel




        /**
         * Repaint all the graphics that are on the screen.
         * The graphics are painted onto an off-screen buffer.
         * When the buffer is completely painted, the buffer is displayed on this panel.
         */
        public void paintComponent(Graphics g){

        	/* rawMouseClicked is set WHENEVER the mouse is clicked */
        	/* We will use a buffer so that we notice the click     */
        	/* ONLY at the top of this loop--i.e. we do NOT want    */
        	/* the state of the mouse click to change in the middle */
        	/* of this loop.                                        */
        	setBufferedMouseClicked(isRawMouseClicked());
        	setRawMouseClicked(false);

            /* if the off-screen buffer has not yet been created, create it */
            if (offscreenImage==null) {
                offscreenImage = createImage(getWidth(), getHeight());
                offscreenGraphics = offscreenImage.getGraphics();

                /* allow the developer to init sprites */
    	        initializeSprites();

            }//if

            /* if a human changed the width or the height of the frame          */
            /* then create a new off-buffer that is the same size as the frame. */
            if (  (offscreenImage.getWidth(this)!= getWidth())
               || (offscreenImage.getHeight(this)!= getHeight()) ) {
                offscreenImage = createImage(getWidth(), getHeight());
                offscreenGraphics = offscreenImage.getGraphics();
                requestFocus();
            }//if

            /* if this panel lost the focus, get the focus back.              */
            /* Why?  We want this panel to be able to respond to key presses. */
            /* WARNING:  If you are planning on adding GUI controls           */
            /* to your game, then you will need to comment this out.          */
            if (hasFocus()==false) requestFocus();

            /* clear/erase/delete the old image that is on the off-screen buffer */
            offscreenGraphics.setColor(Color.WHITE);
            offscreenGraphics.fillRect
               (0,
                0,
                offscreenImage.getWidth(this),
                offscreenImage.getHeight(this));
            offscreenGraphics.setColor(Color.BLACK);

            /* paint the new image onto the off-screen buffer */
            paintFrame(offscreenGraphics);

            /* render the off-screen buffer onto the screen */
            g.drawImage(offscreenImage,0,0,this);

            /* We do NOT want future iterations of paintComponent() */
            /* to respond to any mouse clicks that THIS iteration   */
            /* of paintComponent() have already responded to.       */
            setBufferedMouseClicked(false);

        }//paintComponent


        /**
         * Clock that invokes repaint 15 times every second.
         */
        public class ThreadClock extends Thread {

            /**
             * Invoke repaint 15 times every second
             */
            public void run() {
                while(true) {
                    javax.swing.SwingUtilities.invokeLater(new Runnable(){
                        public void run() {
                            GameBoard.this.repaint();
                        }
                    });
                    try {sleep(67);} catch(InterruptedException e){}
                }//while
            }//run
        }//ThreadGame

    }//MyPanel

    /**
     * Listen for keyboard presses of the following keys: <br>
     * up arrow key <br>
     * down arrow key <br>
     * left arrow key <br>
     * right arrow key <br>
     * space bar
     */
    protected class MyKeyListener implements KeyListener {

        /**
         * Fires whenever a key is pressed.
         * If any of the arrow keys or the space bar is pressed, notify the game.
         * @param event The event that is fired whenever a key is pressed.
         * We will use this event to determine which key , on the keyboard, is pressed.
         */
        public void keyPressed(KeyEvent event) {
            if (event.getKeyCode() == KeyEvent.VK_UP) setUpArrowPressed(true);
            if (event.getKeyCode() == KeyEvent.VK_DOWN) setDownArrowPressed(true);
            if (event.getKeyCode() == KeyEvent.VK_LEFT) setLeftArrowPressed(true);
            if (event.getKeyCode() == KeyEvent.VK_RIGHT) setRightArrowPressed(true);
            if (event.getKeyCode() == KeyEvent.VK_SPACE) setSpaceKeyPressed(true);
        }//keyPressed

        /**
         * Fires whenever a key is released.
         * If any of the arrow keys or the space bar is released, notify the game.
         * @param event The event that is fired whenever a key is released.
         * We will use this event to determine which key , on the keyboard, is released.
         */
        public void keyReleased(KeyEvent event) {
            if (event.getKeyCode() == KeyEvent.VK_UP) setUpArrowPressed(false);
            if (event.getKeyCode() == KeyEvent.VK_DOWN) setDownArrowPressed(false);
            if (event.getKeyCode() == KeyEvent.VK_LEFT) setLeftArrowPressed(false);
            if (event.getKeyCode() == KeyEvent.VK_RIGHT) setRightArrowPressed(false);
            if (event.getKeyCode() == KeyEvent.VK_SPACE) setSpaceKeyPressed(false);
        }//keyReleased
        public void keyTyped(KeyEvent event) {
        }//keyTyped
    }//MyKeyListener

    /**
     * Listen for mouse motion events
     */
    public class MyMouseMotionListener implements MouseMotionListener {

		/**
		 * Fires whenever the mouse is dragged.
		 * We will tell the game where the mouse is.
		 * @event The event that is fired when the mouse is dragged.
		 */
		public void mouseDragged(MouseEvent event) {
		}

		/**
		 * Fires whenever the mouse is moved.
		 * We will tell the game where the mouse is.
		 * @event The event that is fired when the mouse is dragged.
		 */
		public void mouseMoved(MouseEvent event) {
			setMouseX(event.getX());
			setMouseY(event.getY());
		}

    }

    /**
     * Listen for Mouse events
     */
    public class MyMouseListener implements MouseListener {

		/**
		 * Fires whenever the mouse is clicked.
		 * We will notify the game.
		 * @event The event that is fired when the mouse is clicked.
		 */
		public void mouseClicked(MouseEvent event) {
			setRawMouseClicked(true);
		}

		public void mouseEntered(MouseEvent arg0) {
		}

		public void mouseExited(MouseEvent arg0) {
		}

		public void mousePressed(MouseEvent arg0) {
		}

		public void mouseReleased(MouseEvent arg0) {
		}

    }

    /**
     * Play the game
     * @param args Command line arguments
     */
    public static void main(String[] args) {
        javax.swing.SwingUtilities.invokeLater(new Runnable(){
            public void run() {
                new Game();
            }
            });

    }//main

}//Game