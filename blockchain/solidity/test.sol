// SPDX-License-Identifier:GPL-3.0
pragma Solidity >= 0.7.0 <0.9.0;
contract Storage{
    uint 256 number;
    function store(uint256 num) public {
        number = num;
    }

    function retrieve() public view returns (unit256){
        return number;
    }
}