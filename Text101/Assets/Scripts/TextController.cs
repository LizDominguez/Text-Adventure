using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class TextController : MonoBehaviour {

	public Text text;

	public enum States {intro, entrance, gully, door_0, ask_0, gully_lock, 
						ask_1, dungeon, stairs, small_door, book, map, sewer};
	public static States myState;
	

	// Use this for initialization
	void Start () {

		myState = States.intro;
	
	}
	
	// Update is called once per frame
	void Update () {

		switch (myState) {

		case States.intro:
			intro();
			break;

		case States.entrance:
			entrance();
			break;

		case States.door_0:
			door_0();
			break;

		case States.ask_0:
			ask_0();
			break;

		case States.gully:
			gully();
			break;

		case States.gully_lock:
			gully_lock();
			break;

		case States.ask_1:
			ask_1();
			break;

		case States.dungeon:
			load_next_level();
			dungeon();
			break;

		case States.stairs:
			stairs();
			break;

		case States.small_door:
			small_door();
			break;

		case States.book:
			book();
			break;

		case States.map:
			map();
			break;

		case States.sewer:
			sewer();
			break;
			
		}

	
	}


	void load_next_level() {
		
		
		if(Application.loadedLevel == 0) {
			Application.LoadLevel("Level2");
		}
		
	}


	void intro() {

		text.text = "Welcome to  the Dungeon Crawler Text Adventure Game!\n\n" +
					"[Press SPACE to begin]";


		if (Input.GetKeyDown(KeyCode.Space)) {myState = States.entrance;}

	}

	void entrance() {

			text.text = "You are an adventurer standing before the opening of a cave. " +
						"The cave is sealed by a large wooden door. " + 
						"A small stream flows from the caves entrance " +
						"down a gully.\n\n" +
						"[Press A to ask spirit guides, G to search the gully, I to inspect door]";
	

		if (Input.GetKeyDown(KeyCode.A)) {myState = States.ask_0;}

		else if (Input.GetKeyDown(KeyCode.G)) {myState = States.gully;}

		else if (Input.GetKeyDown(KeyCode.I)) {myState = States.door_0;}

	}


	void door_0() {
			
		text.text = "The door is bolted by a silver lock. " +
					"Scratches line the bottom of the jagged wood. " +
					"Odd, it appears like something tried to get out.\n\n" +
					"[Press R to return to dungeon entrace]";
			
			
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.entrance;}
			
	}

	void ask_0() {
		
		text.text = "You ask your spirit guides for help. " +
					"They respond...\n" + 
					"'Check the gully, duh.'\n\n" +
					"[Press R to return to dungeon entrace]";
		
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.entrance;}
		
	}

	void gully() {
		
		text.text = "Peering down the gully, you spot a rusty key jammed between the rocks. " +
					"This must be the dungeon key.\n\n" +
					"[Press R to return to dungeon entrace and try your luck with the key]";
		
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.gully_lock;}
		
	}

	void gully_lock() {
		
		text.text = "Standing at the opening of the cave, you feel an urge " + 
					"to contact your spirit guides.\n\n" +
					"[Press A to ask spirit guides, O to pen door]";
		
		
		if (Input.GetKeyDown(KeyCode.A)) {myState = States.ask_1;}

		else if (Input.GetKeyDown(KeyCode.O)) {myState = States.dungeon;}
		
	}

	void ask_1() {
		
		text.text = "Your spirit guide responds...\n " + 
					"'We can't let you disturb the ritual'\n\n" +
					"You were stripped of your weapons\n\n" +
					"[Press R to return to dungeon entrance]";
		
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.gully_lock;}
		
	}

	void dungeon() {
		
		text.text = "You step inside to discover a well lit dungeon. " + 
					"A set of stairs lies before you. " + 
					"To your right is a small door. A deep thumping echoes in the distance.\n\n" +
					"[Press D to descend stairs, O to open door]";

		if (Input.GetKeyDown(KeyCode.D)) {myState = States.stairs;}
		else if (Input.GetKeyDown(KeyCode.O)) {myState = States.small_door;}

		
	}

	void stairs() {
		
		text.text = "You desced the stairs to find a cloacked figure casting a circle. " +
					"Surrounding him are dark spirits. " +
					"They are startled by your footsteps. You better get out before they see you!\n\n" +
					"[Press R to return]";
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.dungeon;}
		
		
	}

	void small_door() {
		
		text.text = "You slip into the small doorway. Inside is an ancient book,  " + 
					"a map, and a sewer grate.\n\n" +
					"[Press R to read book, T to take map, or O to open sewer grate]";
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.book;}
		else if (Input.GetKeyDown(KeyCode.T)) {myState = States.map;}
		else if (Input.GetKeyDown(KeyCode.O)) {myState = States.sewer;}
		
		
	}

	void book() {
		
		text.text = "You open the old dusty pages and skim... \n" + 
					"There once lived an evil sorcerer who wanted nothing more than to plunge " +
					"our world into darkness...\n" +
					"Before he was sealed away, he vowed to capture the princess " +
					"and sacrifice her to the darkness; thus, completing the prophecy.\n\n" +
					"[Press R to return]";
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.small_door;}
			
	}

	void map() {
		
		text.text = "Peering at the map you notice a small opening marked along the sewers.\n\n" + 
					"[Press R to return]";
		
		if (Input.GetKeyDown(KeyCode.R)) {myState = States.small_door;}
		
	}

	void sewer() {
		
		text.text = "You open the grates and slide into knee-deep murky water. " + 
					"The large sewer rats smell your presence. Just then, you notice " +
					"a small opening on the sewer walls.\n\n" +
					"[Press C to continue, S to sneak into the small opening]";
	
		
		
	}
	
	
}
