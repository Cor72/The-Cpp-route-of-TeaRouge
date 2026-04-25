// ifndef MP
<template></template>
<script>
  export default {
    onLaunch: function (options) {
      // 获取系统信息
      const systemInfo = wx.getSystemInfoSync();
      // 胶囊按钮位置信息
      const menuButtonInfo = wx.getMenuButtonBoundingClientRect();
      // 导航栏高度 = 状态栏到胶囊的间距（胶囊距上距离-状态栏高度） * 2 + 胶囊高度 + 状态栏高度
      this.globalData.navBarHeight = (menuButtonInfo.top - systemInfo.statusBarHeight) * 2 + menuButtonInfo.height + systemInfo.statusBarHeight;
      this.globalData.menuRight = systemInfo.screenWidth - menuButtonInfo.right;
      this.globalData.menuBotton = menuButtonInfo.top - systemInfo.statusBarHeight;
  	  this.globalData.menuHeight = menuButtonInfo.height;
       
       this.globalData.systemInfo = systemInfo
       // console.log(systemInfo)
       this.globalData.safeAreaHeight = this.globalData.systemInfo.safeArea.top + this.globalData.menuHeight +  2 * this.globalData.menuBotton
    },
    // 数据都是根据当前机型进行计算，这样的方式兼容大部分机器
    globalData: {
      systemInfo: {},
      navBarHeight: 0, // 导航栏高度
      menuRight: 0, // 胶囊距右方间距（方保持左、右间距一致）
      menuBotton: 0, // 胶囊距底部间距（保持底部间距一致）
      menuHeight: 0, // 胶囊高度（自定义内容可与胶囊高度保证一致）
      safeAreaHeight: 0
    },
  };
</script>

<style lang="scss">
  /*每个页面公共css */
  @import '/wxcomponents/@vant/weapp/common/index.wxss';
  page {
    background-color: #f5f5f5;
    --navbar-color: #44ADFB;
  }
  // .container {
  //   height: 100%;
  //   display: flex;
  //   flex-direction: column;
  //   align-items: center;
  //   justify-content: space-between;
  //   padding: 200rpx 0;
  //   box-sizing: border-box;
  // }
  .tac {
    text-align: center;
  }
  .pd-5 {
    padding: 5px;
  }

  .example-info {
    font-size: 14px;
    color: #333;
    padding: 10px;
  }
  .ellipsis {
    white-space: nowrap;
    overflow: hidden;
    text-overflow: ellipsis;
  }
  .ml-5 {
    margin-left: 5px;
  }
</style>

// endif
