// © Copyright 2010 - 2018 BlackTopp Studios Inc.
/* This file is part of The UTF8 Conversion Library.

    The UTF8 Conversion Library is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The UTF8 Conversion Library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with The UTF8 Conversion Library.  If not, see <http://www.gnu.org/licenses/>.
*/
/* The original authors have included a copy of the license specified above in the
   'doc' folder. See 'gpl.txt'
*/
/* We welcome the use of the UTF8 Conversion Library to anyone, including companies who wish to
   Build professional software and charge for their product.

   However there are some practical restrictions, so if your project involves
   any of the following you should contact us and we will try to work something
   out:
    - DRM or Copy Protection of any kind(except Copyrights)
    - Software Patents You Do Not Wish to Freely License
    - Any Kind of Linking to Non-GPL licensed Works
    - Are Currently In Violation of Another Copyright Holder's GPL License
    - If You want to change our code and not add a few hundred MB of stuff to
        your distribution

   These and other limitations could cause serious legal problems if you ignore
   them, so it is best to simply contact us or the Free Software Foundation, if
   you have any questions.

   Joseph Toppi - toppij@gmail.com
   John Blackwood - makoenergy02@gmail.com
*/

#include "XmlSerialization.h"
#include "XmlRootNodeInternalImplementation.h"


//#include "

/// @file
/// @brief Description of the implementation of SampleSource

namespace Mezzanine {

// copied from https://pugixml.org/docs/manual.html
struct xml_string_writer : public pugi::xml_writer
{
    XmlSerializationString Result;

    virtual void write(const void* Data, size_t Size)
    {
        Result.append(static_cast<const char*>(Data), Size);
    }
};

template<typename SerializationSchemeType>
XmlRootNode::XmlSerializationRootNode()
    : Instance(new XmlSerializationRootNodeInternalImplementation())
{}

template<>
XmlRootNode::~XmlSerializationRootNode()
{
    delete Instance;
}

/*
template<>
void XmlRootNode::AddChildNode(XmlNode)
{
    //Instance->Document.append_child(Node.Instance);
}

template<>
void XmlRootNode::AddChildNode(SerializationString NodeName)
    { AddChildNode(XmlNode(NodeName)); }

*/
template<>
XmlSerializationString XmlRootNode::SerializeToString()
{
    return "";
    /*
    xml_string_writer Writer;
    const char Space = ' ';
    Instance->Document.save(Writer, &Space, pugi::format_raw);
    return Writer.Result;
    // */
}

} // End Mezzanine Namespace
