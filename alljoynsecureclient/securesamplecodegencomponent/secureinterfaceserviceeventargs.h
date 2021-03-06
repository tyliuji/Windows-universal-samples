//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************
//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGen.exe
//   Version: 1.0.0
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Extension Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UAP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGen - Invoke the following command with a valid 
//   Introspection XML file:
//     AllJoynCodeGen -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace Bus { namespace Samples { namespace Secure {

// Methods
public ref class SecureInterfaceCatCalledEventArgs sealed
{
public:
    SecureInterfaceCatCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interface_inStr1, _In_ Platform::String^ interface_inStr2);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property SecureInterfaceCatResult^ Result
    {
        SecureInterfaceCatResult^ get() { return m_result; }
        void set(_In_ SecureInterfaceCatResult^ value) { m_result = value; }
    }

    property Platform::String^ InStr1
    {
        Platform::String^ get() { return m_interface_inStr1; }
    }

    property Platform::String^ InStr2
    {
        Platform::String^ get() { return m_interface_inStr2; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<SecureInterfaceCatResult^>^ GetResultAsync(SecureInterfaceCatCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<SecureInterfaceCatResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<SecureInterfaceCatResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    SecureInterfaceCatResult^ m_result;
    Platform::String^ m_interface_inStr1;
    Platform::String^ m_interface_inStr2;
};

// Readable Properties
// Writable Properties
} } } } } 
