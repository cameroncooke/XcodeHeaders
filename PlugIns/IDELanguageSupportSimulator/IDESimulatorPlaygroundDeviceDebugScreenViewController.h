//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "IDESimulatorPlaygroundFramebufferServiceChannelDelegate.h"

@class IDESimulatorPlaygroundFramebufferServiceChannel, NSLayoutConstraint, NSString;

@interface IDESimulatorPlaygroundDeviceDebugScreenViewController : NSViewController <IDESimulatorPlaygroundFramebufferServiceChannelDelegate>
{
    IDESimulatorPlaygroundFramebufferServiceChannel *_framebufferServiceChannel;
    id <IDESimulatorPlaygroundDeviceDebugScreenViewControllerDelegate> _delegate;
    NSLayoutConstraint *_aspectRatioConstraint;
    struct CGSize _framebufferImageSize;
}

@property(retain) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property struct CGSize framebufferImageSize; // @synthesize framebufferImageSize=_framebufferImageSize;
@property __weak id <IDESimulatorPlaygroundDeviceDebugScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDESimulatorPlaygroundFramebufferServiceChannel *framebufferServiceChannel; // @synthesize framebufferServiceChannel=_framebufferServiceChannel;
- (void).cxx_destruct;
- (void)simulatorPlaygroundFramebufferServiceChannel:(id)arg1 didReceiveFramebufferImage:(struct CGImage *)arg2;
- (void)_processMouseEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)loadView;
- (id)initWithFramebufferServiceChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

