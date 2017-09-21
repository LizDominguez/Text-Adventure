using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class TextController : MonoBehaviour {

	public Text text;

	// Use this for initialization
	void Start () {

		text.text = "Welcome to  the Dungeon Crawler Text Adventure Game!\n\n" +
					"Press SPACE to begin";
	
	}
	
	// Update is called once per frame
	void Update () {

		if (Input.GetKeyDown(KeyCode.Space)) {
			text.text = "You are an adventurer standing before the opening of a cave. " +
						"The cave's door bears a heavy lock. " + 
						"A small stream flows from the caves entrance " +
						"down a gully.\n\n" +
						"Press G to search the gully, L to view lock, S to swing sword";
		}
	
	}
}
