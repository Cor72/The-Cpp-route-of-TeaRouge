<template>
  <view class="not-found">
    <text class="title">404</text>
    <text class="message">页面未找到</text>
    <button @click="goBack">返回首页</button>
  </view>
</template>

<script setup>
const goBack = () => {
  // 使用 uni 对象进行页面跳转
  uni.navigateTo({
    url: '/pages/Home'
  })
}
</script>

<style scoped>
.not-found {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 100vh;
}

.title {
  font-size: 48px;
  color: #ff6b6b;
  margin-bottom: 20px;
}

.message {
  font-size: 18px;
  color: #666;
  margin-bottom: 30px;
}
</style>
