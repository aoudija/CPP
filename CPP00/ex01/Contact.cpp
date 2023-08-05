#include "Contact.hpp"
//setters
void Contact::sf_name(std::string first_name){
	this->first_name = first_name;
}
void Contact::sl_name(std::string last_name){
	this->last_name = last_name;
}
void Contact::snick_name(std::string nickname){
	this->nickname = nickname;
}
void Contact::sphonenum(std::string phone_number){
	this->phone_number = phone_number;
}
void Contact::ssecret(std::string darkest_secret){
	this->darkest_secret = darkest_secret;
}
//getters
std::string Contact::gf_name(){
	return (first_name);
}
std::string Contact::gl_name(){
	return (last_name);
}
std::string Contact::gnick_name(){
	return (nickname);
}
std::string Contact::gphonenum(){
	return (phone_number);
}
std::string Contact::gsecret(){
	return (darkest_secret);
}
