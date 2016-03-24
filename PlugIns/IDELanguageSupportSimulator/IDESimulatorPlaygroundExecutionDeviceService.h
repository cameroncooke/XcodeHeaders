//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEPlaygroundExecutionDeviceService.h"

#import "IDEPlaygroundExecutionDeviceInputEventProcessing.h"
#import "IDESimulatorPlaygroundFramebufferServiceChannelDelegate.h"

@class IDESimulatorPlaygroundDeviceCommunicationService, IDESimulatorPlaygroundFramebufferServiceChannel, NSObject<OS_dispatch_queue>, NSString;

@interface IDESimulatorPlaygroundExecutionDeviceService : IDEPlaygroundExecutionDeviceService <IDESimulatorPlaygroundFramebufferServiceChannelDelegate, IDEPlaygroundExecutionDeviceInputEventProcessing>
{
    NSObject<OS_dispatch_queue> *_deviceFramebufferImageAccessQueue;
    struct CGImage *_deviceFramebufferImage;
    BOOL _usingAlternateFramebuffer;
    IDESimulatorPlaygroundDeviceCommunicationService *_deviceCommunicationService;
    IDESimulatorPlaygroundFramebufferServiceChannel *_framebufferServiceChannel;
}

+ (id)capability;
+ (id)simulatorPlaygroundExecutionDeviceServiceLogAspect;
@property BOOL usingAlternateFramebuffer; // @synthesize usingAlternateFramebuffer=_usingAlternateFramebuffer;
@property(retain) IDESimulatorPlaygroundFramebufferServiceChannel *framebufferServiceChannel; // @synthesize framebufferServiceChannel=_framebufferServiceChannel;
@property(retain) IDESimulatorPlaygroundDeviceCommunicationService *deviceCommunicationService; // @synthesize deviceCommunicationService=_deviceCommunicationService;
- (void).cxx_destruct;
- (void)applicationDidResignActive:(id)arg1;
- (void)purgeHIDModifiers;
- (BOOL)_processFlagsChangedEvent:(id)arg1;
- (BOOL)_processKeyboardEvent:(id)arg1;
- (BOOL)_processMouseEvent:(id)arg1 fromView:(id)arg2 deviceRelativeLocation:(struct CGPoint)arg3 screen:(long long)arg4;
- (BOOL)processInputEvent:(id)arg1 fromView:(id)arg2 deviceRelativeLocation:(struct CGPoint)arg3;
- (void)simulatorPlaygroundFramebufferServiceChannel:(id)arg1 didReceiveFramebufferImage:(struct CGImage *)arg2;
- (id)_disabledSimulatorJobs;
- (BOOL)_shouldDisableUnnecessarySimulatorJobs;
- (BOOL)_shouldDisableSimulatorDataMigration;
- (void)_setAlternateFramebufferSize:(struct CGSize)arg1;
- (BOOL)configureFramebufferServiceChannelWithDevice:(id)arg1 error:(out id *)arg2;
- (struct IDESimulatorDeviceFramebufferSize)deviceFramebufferSize;
- (struct CGImage *)copyOfFramebufferImage;
- (void)framebufferImageDidChange;
- (void)setDeviceFramebufferImage:(struct CGImage *)arg1;
- (void)synchronizeDeviceFramebufferImageAccessWithBlock:(CDUnknownBlockType)arg1;
- (int)_launchAppAtURL:(id)arg1 withDevice:(id)arg2 launchOptions:(id)arg3 checkForCancellationBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (BOOL)bootDevice:(id)arg1 error:(out id *)arg2;
- (int)_launchAppInFullSimulatorModeWithExecutablePath:(id)arg1 environment:(id)arg2 checkForCancellationBlock:(CDUnknownBlockType)arg3 slaveFilename:(id)arg4 error:(out id *)arg5;
- (int)_launchAppInSimpleSimulatorModeWithExecutablePath:(id)arg1 environment:(id)arg2 slaveFilename:(id)arg3 error:(id *)arg4;
- (id)_sandboxProfileDataWithContainerPath:(id)arg1 socketPath:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (CDUnknownBlockType)_createPlaygroundLauncherForPreparationParameters:(id)arg1;
- (id)sessionForExecutingPlaygroundWithParameters:(id)arg1;
- (void)dealloc;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

