//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTPagingSheetWindowController.h>

@class DVTDevice, DVTReplacementView;

@interface DVTDeviceLogsSheetController : DVTPagingSheetWindowController
{
    Class _deviceLogsViewControllerClass;
    DVTDevice *_device;
    DVTReplacementView *_replacementView;
}

@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)done:(id)arg1;
- (void)endSheet;
- (void)windowDidLoad;
- (id)initWithDevice:(id)arg1 deviceLogsViewControllerClass:(Class)arg2;

@end

