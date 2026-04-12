import { createRouter } from "vue-router";
import { routes } from "./routes";

const router = createRouter({
  routes:[
    {
        path: '/',
        component: () => import('./views/Home.vue'),
    }
  ]
});