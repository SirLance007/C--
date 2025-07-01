function outer(){
    let cnt = 0;
    function inner(){
        cnt++;
        console.log(cnt);
    }
}

let out = outer();
out;
out;

const Promise = new Promise((resolve , reject) => {
    resolve("This promise is resolved")
})

// This is called destruction in witch the value of a is equal to 1

const [a , b] = [1 ,2]

const add = function(a , n){
    return a + b;
}

// var => functional scope
// let/const => block-scope
// const => non changeable
const sub = (a , b) => (c , d) => {

}

// closure give access to outer scope from the inner scope

const addSum = (a , b) => {
    return a+b;
}

import {fruits} from '.'
export const data = fruits();

