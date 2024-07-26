const donateClothesForm = document.getElementById('donate-clothes-form');
donateClothesForm.addEventListener('submit', (e) => {
        e.preventDefault();
        const formData = new FormData(donateClothesForm);
        const data = {
                name: formData.get('name'),
                phone: formData.get('phone'),
                address: formData.get('address'),
                clothes: formData.get('clothes')
        };
        console.log(data);
        donateClothesForm.reset();
});


var crsrblr= document.querySelector("#cursor-blur")
document.addEventListener("mousemove",function(dets){
    crsrblr.style.left = dets.x -160 + "px"
    crsrblr.style.top = dets.y -150 + "px"
         
})

gsap.to("nav", {
        backgroundColor : "#000",
        height:90,
        duration:0.5,
        scrollTrigger:{
                trigger:"nav",
                scroller:"body",
                markers:false,
                start:"top-10%",
                scrub:1,
        }
})
/* gsap.to(".main" ,{
         backgroundColor:"#000",
         scrollTrigger:{
                 trigger:".main",
                 scroller:"body",
                 markers:false,
                 start:"top-30%",
                 end:"end-80%",
                 scrub:2,
                  }*/

// })
// Define the ScrollTrigger
// gsap.registerPlugin(ScrollTrigger);

// // Create a timeline with the background color change
// const tl = gsap.timeline({
//   scrollTrigger: {
//     trigger: "body",
//     start: "top top",
//     end: "bottom top",
//     scrub: true
//   }
// });

// // Add background color animations to the timeline
// tl.to("body", { backgroundColor: "#000" });

