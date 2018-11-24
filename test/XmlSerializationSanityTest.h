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
#ifndef Mezz_SerializationBackendXML_XmlSerializationSanityTest_h
#define Mezz_SerializationBackendXML_XmlSerializationSanityTest_h

/// @file
/// @brief Tests for the stuff in SampleHeader and SampleSource


// Add other headers you need here
#include "XmlSerialization.h"

#include "MezzTest.h"

using XmlScheme                 = Mezzanine::XmlScheme;

using XmlAttribute              = Mezzanine::XmlAttribute;
using XmlBackEnd                = Mezzanine::XmlBackEnd;
using XmlRootNode               = Mezzanine::XmlRootNode;
using XmlNode                   = Mezzanine::XmlNode;

using XmlNodeCount              = Mezzanine::XmlNodeCount;
using XmlSerializationString    = Mezzanine::XmlSerializationString;


// This boilerplate sucks, but it is as small as was reasonable to make it. This always matches the filename. Just
// Put FilenameTest in for the first parameter and Filename in for the second. There are reasons for this but even
// The developers of this havn't found a good reason to deviate, dig into the Mezz_Test docs if you want details.
DEFAULT_TEST_GROUP(XmlSerializationSanityTest, XmlSerializationSanity)
{
    TEST_EQUAL("XmlDefaultSerializationEmpty",
               XmlSerializationString("<?xml version=\"1.0\"?>"),
               XmlBackEnd().CreateRootNode().SerializeToString());
    {
        XmlRootNode SampleRoot = XmlBackEnd().CreateRootNode();

    }

}

#endif
