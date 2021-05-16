const puppeteer = require('puppeteer');
const cheerio = require('cheerio');
var info;
var info1;
(async () => {
    try {
        const browser = await puppeteer.launch({
            headless: false,
            devtools: true,
        });
        const page = await browser.newPage(); // Open the page
        await page.goto('https://hccs.000webhostapp.com/'); // Page goto the Url
          const content = await page.content();
  // $에 cheerio를 로드한다.
  const $ = cheerio.load(content);
  // 복사한 리스트의 Selector로 리스트를 모두 가져온다.
  const list1 = $("div");

  // 모든 리스트를 순환한다.
  list1.each((index, list) => {

					 
 info = $(list).find(" div.jumsue ").text();
 info1 = $(list).find(" div.mv ").text();
    console.log({index, info, info1});
  });  
 




        await browser.close(); // Close Browser
    } catch (error) {
        console.error(error);
    }
})();

// More API functions here:
    // https://github.com/googlecreativelab/teachablemachine-community/tree/master/libraries/image

    // the link to your model provided by Teachable Machine export panel
    
    var five = require("johnny-five");
    var board = new five.Board();//{port: "COM6"});
    var button;
    const Oled = require('oled-js');
	const font = require('oled-font-5x7');

        board.on("ready", () => {
          var saveled = new five.Led(2);
          var led1 = new five.Led(3);
          var led2 = new five.Led(4);
          var led3 = new five.Led(5);
          var led4 = new five.Led(6);
          var led5 = new five.Led(7);
          var led6 = new five.Led(8);
          saveled.off();
          led1.off();
          led2.off();
          led3.off();
          led4.off();
          led5.off();
          led6.off();
          const opts = {
            width: 128,
            height: 64,
            address: 0x3C
          };
          button = new five.Button({
            pin: 9,
	isPullup: true	
          });
          var buttoncond = false;
	
          const oled = new Oled(board, five, opts);
	oled.fillRect(1, 1, 128, 64, 0);
         oled.turnOffDisplay();
          
          oled.turnOnDisplay();
          oled.setCursor(0, 1);
          oled.writeString(font, 1, 'hello!', 1, true, 2);
          oled.writeString(font, 1, 'score:', 1, true, 2);
          number = info;
          oled.writeString(font, 1, number.toString(), 1, true, 2);
          if( buttoncond == true){
            oled.setCursor(1, 1);
            oled.writeString(font, 1, 'info saved!', 1, true, 2);
           }

	button.on("up", function() {
        saveled.off();
        buttoncond = true;
         zipchange1();
oled.setCursor(1, 1);
            oled.writeString(font, 1, 'info saved!', 1, true, 2);
      });
button.on("down", function() {
        saveled.off();
        buttoncond = false;
oled.setCursor(1, 8);
            oled.writeString(font, 1, 'info save! bye!', 1, true, 2);
      });
        });
      function zipchange1(){
document.form.action= "./dbConnect.php";
document.form.submit();
}
  

