<template>
  <view class="home">
    <text>欢迎来到首页</text>
    <button @click="goTo404">测试404页面</button>
  </view>
</template>

<script setup>
// 不需要导入 navigateTo，直接使用 uni 对象
const goTo404 = () => {
  // uni-app 的页面跳转 API
  uni.navigateTo({
    url: '/pages/404'  // 注意：路径以 /pages/ 开头
  })
}
</script>

<style scoped>
.home {
  padding: 20px;
  text-align: center;
}
</style>
