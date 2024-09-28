// https://leetcode.com/problems/calculator-with-method-chaining/

class Calculator {
    
    /** 
     * @param {number} value
     */
    constructor(value) {
        this._result = value;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    add(value){
        this._result += value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    subtract(value){
        this._result -= value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */  
    multiply(value) {
        this._result *= value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    divide(value) {
        if (value === 0) {
            throw new Error("Division by zero is not allowed");
        }
        this._result /= value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    power(value) {
        this._result = Math.pow(this._result, value);
        return this;
    }
    
    /** 
     * @return {number}
     */
    getResult() {
        return this._result;
    }
}