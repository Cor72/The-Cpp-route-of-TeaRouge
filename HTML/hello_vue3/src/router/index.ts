import { createRouter, createWebHistory } from "vue-router";

// 删除这些导入，因为路由中已经使用了动态导入
// 如果需要在其他地方使用这些组件，应该使用默认导入方式
// import Home from "../components/Home.vue";
// import About from "../components/About.vue";
// import News from "../components/News.vue";

const router = createRouter({
  history: createWebHistory(),
  routes: [
    {
      name:'zhuye',
      path: '/home',
      component: () => import('../components/Home.vue'),
    },
    {
      name:'guanyu',
      path: '/about',
      component: () => import('../components/About.vue'),
    },
    {
      name:'xinwen',
      path: '/news',
      component: () => import('../components/News.vue'),
    },
    // 添加重定向或默认路由
    {
      path: '/',
      redirect: '/home'
    }
  ]
});

export default router;
