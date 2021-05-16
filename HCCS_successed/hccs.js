// More API functions here:
    // https://github.com/googlecreativelab/teachablemachine-community/tree/master/libraries/image

    // the link to your model provided by Teachable Machine export panel
    
    var five = require("johnny-five");
    var board = new five.Board({port: "COM6"});
    //var button;
    const Oled = require('oled-js');
	const font = require('oled-font-5x7');

        board.on("ready", () => {
          const saveled = new five.Led(2);
          const led1 = new five.Led(3);
          const led2 = new five.Led(4);
          const led3 = new five.Led(5);
          const led4 = new five.Led(6);
          const led5 = new five.Led(7);
          const led6 = new five.Led(8);
          const opts = {
            width: 128,
            height: 64,
            address: 0x7A
          };
          button = new five.Button({
            pin: 9,
            isPullup: true
          });
          var buttoncond = false;

          const oled = new Oled(board, five, opts);
          oled.turnOnDisplay();
          oled.setCursor(0, 1);
          oled.writeString(font, 1, 'hello!', 1, true, 2);
          oled.writeString(font, 1, 'score:', 1, true, 2);
          //oled.writeInt(score);
          if( buttoncond == true){
            oled.setCursor(1, 1);
            oled.writeString(font, 1, 'info saved!', 1, true, 2);
           }

	button.on("down", function() {
        saveled.on();
        buttoncond = true;
      });
        });
        

