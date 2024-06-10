//顶部导航栏交互
const header = document.querySelector('.header')
window.addEventListener('scroll', function () {
    const n = document.documentElement.scrollTop
    header.style.top = n >= 40 ? 0 : '-60px'
})

//播放按钮交互
let music = document.querySelector('#song')
let turn = document.querySelector('.turn')
let bt = document.querySelector('.bt')
let btword = document.querySelector('.btword')
bt.onclick = function(){
  if(music.paused)
    {
      music.play()
      btword.innerText = "Pause"
      turn.src="./images/暂停.png"
    }
    else{
      music.pause()
      btword.innerText = "Play"
      turn.src="./images/播放.png"
    }
};
turn.onclick = function(){
  if(music.paused)
    {
      music.play()
      btword.innerText = 'Pause'
      turn.src="./images/暂停.png"
    }
    else{
      music.pause()
      btword.innerText = 'Play'
      turn.src="./images/播放.png"
    }
};

// 下箭头交互
let headimg = document.querySelector('.headimg')
let lower = document.querySelector('#lower')
lower.onclick = function(){
  window.scrollTo(0,headimg.clientHeight-60)
};

// HOME 交互
let HOME = document.querySelector('.HOME')
HOME.onclick = function(){
  window.scrollTo(0,0)
};
// KNOW 交互
let KNOW = document.querySelector('.KNOW')
KNOW.onclick = function()
{
  window.scrollTo(0,headimg.clientHeight-60)
}
// FEEL 交互
let FEEL = document.querySelector('.FEEL')
let knowcontents = document.querySelector('.knowcontents')
FEEL.onclick = function()
{
  window.scrollTo(0,headimg.clientHeight+knowcontents.clientHeight-60)
}
// LOVE 交互
let LOVE = document.querySelector('.LOVE')
let feelcontents = document.querySelector('.feelcontents')
LOVE.onclick = function()
{
  window.scrollTo(0,headimg.clientHeight+knowcontents.clientHeight+feelcontents.clientHeight-60)
}

// KNOW - 轮播图效果
let one = document.querySelector('.one')
let two = document.querySelector('.two')
let three = document.querySelector('.three')
let other1 = document.querySelector('.other1')
let other2 = document.querySelector('.other2')

let arr = ['one','two','three','other1','other2']

//轮播图文字
let middle = document.querySelector('.middle')
let leftpart = document.querySelector('.leftpart')
let rightpart = document.querySelector('.rightpart')
let hidden = document.querySelectorAll('.hidden')
let showtype = ['leftpart','middle','rightpart','hidden','hidden']
// 定义轮播函数
function clickpic(){
  // 图片部分
  let i = 0
  let temp = arr[0];
  for(i; i < arr.length - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[arr.length - 1] = temp;
  
  one.className = arr[0];
  two.className = arr[1];
  three.className = arr[2];
  other1.className = arr[3];
  other2.className = arr[4];
  
  // 调整 z-index
  document.querySelector('.one').style.zIndex = '2';
  document.querySelector('.two').style.zIndex = '3';
  document.querySelector('.three').style.zIndex = '2';
  document.querySelector('.other1').style.zIndex = '1';
  document.querySelector('.other2').style.zIndex = '1';
  i = 0
  // 文字部分
  let q = showtype[0];
  for(i; i < showtype.length - 1; i++) {
    showtype[i] = showtype[i + 1];
  }
  showtype[showtype.length - 1] = q;
  leftpart.className = showtype[0];
  middle.className = showtype[1];
  rightpart.className = showtype[2];
  hidden[0].className = showtype[3];
  hidden[1].className = showtype[4];
}
// 计时器
let ptime = setInterval(function(){
  clickpic()
},3000)
// 鼠标经过轮播图，停止计时器
const slider = document.querySelector('.climate')
    slider.addEventListener('mouseenter', function () {
      // 停止定时器
      clearInterval(ptime)
    });
// 鼠标离开轮播图，开始计时器
slider.addEventListener('mouseleave' , function(){
  ptime = setInterval(function(){
    clickpic()
  },3000)
});