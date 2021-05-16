const puppeteer = require('puppeteer');

(async () => {
    try {
        const browser = await puppeteer.launch({
            headless: false,
            devtools: true,
        });
        const page = await browser.newPage(); // Open the page
        await page.goto('http://192.168.0.19'); // Page goto the Url
        for(var i=0; i++;){
            await page.screenshot({ path: 'example.png'+ i });
            await page.goto('https://fengyuanchen.github.io/photo-editor/');
            var canvas;
            canvas = image.cropper('getCroppedCanvas',{
    		        width:1195,
    		        height:889
    	      });
            $.ajax('D:/', {
           		method: 'POST',
                data: formData,
                processData: false,
                contentType: false,
                success: function () {
                	alert('업로드 성공');
                },

        }



        await browser.close(); // Close Browser
    } catch (error) {
        console.error(error);
    }
})();
