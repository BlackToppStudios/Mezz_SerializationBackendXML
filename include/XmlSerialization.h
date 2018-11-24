// © Copyright 2010 - 2018 BlackTopp Studios Inc.
/* This file is part of The Mezzanine Engine.

    The Mezzanine Engine is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The Mezzanine Engine is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with The Mezzanine Engine.  If not, see <http://www.gnu.org/licenses/>.
*/
/* The original authors have included a copy of the license specified above in the
   'Docs' folder. See 'gpl.txt'
*/
/* We welcome the use of the Mezzanine engine to anyone, including companies who wish to
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
#ifndef Mezz_SerializationBackendXML_XmlSerialization_h
#define Mezz_SerializationBackendXML_XmlSerialization_h

#include "XmlAttribute.h"
#include "XmlBackEnd.h"
#include "XmlNode.h"
#include "XmlRootNode.h"

#include "XmlInternalImplementation.h"

/// @file
/// @brief
namespace Mezzanine {


// Every Serialization system needs a "Scheme" that will define every type in
/// @brief A description of all the types used in a Serialization Scheme.
/// @details This is a single place to change all the types used in XML serialization.
class XmlSerializationScheme
{
public:
    // Scheme type
    using SerializationScheme                   = XmlSerializationScheme;

    // Primitive types
    using NodeCount                             = Mezzanine::Int32;
    using SerializationString                   = Mezzanine::String;

    // Tree type heiarchy types.
    using SerializationAttribute                = XmlSerializationAttribute<XmlSerializationScheme>;
    using SerializationBackEnd                  = XmlSerializationBackEnd<XmlSerializationScheme>;
    using SerializationNode                     = XmlSerializationNode<XmlSerializationScheme>;
    using SerializationRootNode                 = XmlSerializationRootNode<XmlSerializationScheme>;

    // Internal types not part of the API
    using SerializationInternalImplementation
        = XmlSerializationInternalImplementation<XmlSerializationScheme>;
    using SerializationAttributeInternalImplementation
        = XmlSerializationAttributeInternalImplementation<XmlSerializationScheme>;
    using SerializationBackEndInternalImplementation
        = XmlSerializationBackEndInternalImplementation<XmlSerializationScheme>;
    using SerializationNodeInternalImplementation
        = XmlSerializationNodeInternalImplementation<XmlSerializationScheme>;
    using SerializationRootNodeInternalImplementation
        = XmlSerializationRootNodeInternalImplementation<XmlSerializationScheme>;
};

using XmlScheme                 = XmlSerializationScheme;

using XmlAttribute              = XmlSerializationScheme::SerializationAttribute;
using XmlBackEnd                = XmlSerializationScheme::SerializationBackEnd;
using XmlNode                   = XmlSerializationScheme::SerializationNode;
using XmlRootNode               = XmlSerializationScheme::SerializationRootNode;

using XmlImpl                   = XmlSerializationScheme::SerializationInternalImplementation;
using XmlAttributeImpl          = XmlSerializationScheme::SerializationAttributeInternalImplementation;
using XmlBackEndImpl            = XmlSerializationScheme::SerializationBackEndInternalImplementation;
using XmlNodeImpl               = XmlSerializationScheme::SerializationNodeInternalImplementation;
using XmlRootNodeImpl           = XmlSerializationScheme::SerializationRootNodeInternalImplementation;

using XmlNodeCount              = XmlSerializationScheme::NodeCount;
using XmlSerializationString    = XmlSerializationScheme::SerializationString;

}

#endif
