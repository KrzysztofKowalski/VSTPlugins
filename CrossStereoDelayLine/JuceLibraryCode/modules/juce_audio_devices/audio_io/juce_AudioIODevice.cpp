/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2013 - Raw Material Software Ltd.

   Permission is granted to use this software under the terms of either:
   a) the GPL v2 (or any later version)
   b) the Affero GPL v3

   Details of these licenses can be found at: www.gnu.org/licenses

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

   ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.juce.com for more information.

  ==============================================================================
*/

AudioIODevice::AudioIODevice (const String& deviceName, const String& typeName_)
    : name (deviceName),
      typeName (typeName_)
{
}

AudioIODevice::~AudioIODevice()
{
}

bool AudioIODevice::hasControlPanel() const
{
    return false;
}

bool AudioIODevice::showControlPanel()
{
    jassertfalse;    // this should only be called for devices which return true from
                     // their hasControlPanel() method.
    return false;
}

//==============================================================================
void AudioIODeviceCallback::audioDeviceError (const String&) {}
