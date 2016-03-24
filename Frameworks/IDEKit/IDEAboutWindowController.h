//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowRestoration.h"

@class NSString, NSTextField;

@interface IDEAboutWindowController : NSWindowController <NSWindowRestoration>
{
    NSTextField *_appNameLabel;
    NSTextField *_copyrightMultilineLabel;
    NSTextField *_versionAndBuildLabel;
    NSTextField *_revisionMultilineLabel;
    NSTextField *_toolchainLabel;
    NSString *_pathToAcknowledgments;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedAboutWindowController;
- (void).cxx_destruct;
- (void)showLicenseAgreement:(id)arg1;
- (void)showAcknowledgments:(id)arg1;
- (void)openAboutWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)_versionString;
- (id)_toolchainString;
- (id)_copyrightAndTrademarkString;
- (id)_revisionString;
@property(readonly) NSString *pathToLicenseAgreement;
@property(readonly) NSString *pathToAcknowledgments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
