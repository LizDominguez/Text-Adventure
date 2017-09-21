using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class TextController : MonoBehaviour {

	public Text text;

	public enum States {intro, entrance, gully, door_0, ask_0, gully_lock, ask_1, dungeon};
	public static States myState;

	// Use this for initialization
	void Start () {

		myState = States.intro;
	
	}
	
	// Update is called once per frame
	void Update () {

		switch (myState) {

		case States.intro:
			state_intro();
			break;

		case States.entrance:
			state_entrance();
			break;

		case States.door_0:
			state_door_0();
			break;

		case States.ask_0:
			state_ask_0();
			break;

		case States.gully:
			state_gully();
			break;

		case States.gully_lock:
			state_gully_lock();
			break;

		case States.ask_1:
			state_ask_1();
			break;

		case States.dungeon:
			state_dungeon();
			break;

		}

	
	}


	void state_intro() {
		text.text = "Welcome to  the Dungeon Crawler Text Adventure Game!\n\n" +
					"Press SPACE to begin";

		if (Input.GetKeyDown(KeyCode.Space)) {
			myState = States.entrance;
		}

	}

	void state_entrance() {

			text.text = "You are an adventurer standing before the opening of a cave. " +
						"The cave is sealed by a large wooden door. " + 
						"A small stream flows from the caves entrance " +
						"down a gully.\n\n" +
						"Press A to ask spirit guides, G to search the gully, I to inspect door";
	

		if (Input.GetKeyDown(KeyCode.A)) {
			myState = States.ask_0;
		}

		if (Input.GetKeyDown(KeyCode.G)) {
			myState = States.gully;
		}

		if (Input.GetKeyDown(KeyCode.I)) {
			myState = States.door_0;
		}

	}


	void state_door_0() {
			
		text.text = "The door is bolted by a silver lock. Scratches line the bottom of the jagged wood. " +
					"Odd, it appears like something tried to get out.\n\n" +
					"Press R to return to dungeon entrace";
			
			
		if (Input.GetKeyDown(KeyCode.R)) {
				myState = States.entrance;
		}
			
	}

	void state_ask_0() {
		
		text.text = "You ask your spirit guides for help. " +
					"They respond...\n" + 
					"'Check the gully, duh.'\n\n" +
					"Press R to return to dungeon entrace";
		
		
		if (Input.GetKeyDown(KeyCode.R)) {
			myState = States.entrance;
		}
		
	}

	void state_gully() {
		
		text.text = "Peering down the gully, you spot a rusty key jammed between the rocks. " +
					"This must be the dungeon key.\n\n" +
					"Press R to return to dungeon entrace and try your luck with the key";
		
		
		if (Input.GetKeyDown(KeyCode.R)) {
			myState = States.gully_lock;
		}
		
	}

	void state_gully_lock() {
		
		text.text = "Standing at the opening of the cave, you feel an urge " + 
					"to contact your spirit guides.\n\n" +
					"Press A to ask spirit guides, O to pen door";
		
		
		if (Input.GetKeyDown(KeyCode.A)) {
			myState = States.ask_1;
		}

		else if (Input.GetKeyDown(KeyCode.O)) {
			myState = States.dungeon;
		}
		
	}

	void state_ask_1() {
		
		text.text = "Your spirit guide responds...\n " + 
					"'This dungeon's pretty tough. I feel bad for you, dude. " +
					"Here, take this sword.'\n\n" +
					"You acquired a meaningless item\n\n" +
					"Press R to return to dungeon entrance";
		
		
		if (Input.GetKeyDown(KeyCode.R)) {
			myState = States.gully_lock;
		}
		
	}

	void state_dungeon() {
		
		text.text = "You step inside the dungeon. " + 
					"A deep thumping echoes in the distance. ";

		
	}
}
