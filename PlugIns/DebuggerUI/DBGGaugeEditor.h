//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugGaugeReportEditor.h"

#import "IDEDebugGaugeReportContentDelegate.h"

@class IDEDebugSession, NSString;

@interface DBGGaugeEditor : IDEDebugGaugeReportEditor <IDEDebugGaugeReportContentDelegate>
{
    IDEDebugSession *_debugSession;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)hasDefaultTopSection;
- (id)instrumentsToolIdentifierForAnalysis;
- (void)launchInstruments:(id)arg1;
- (void)updateText:(id)arg1 inTextField:(id *)arg2 withTitle:(id)arg3 toView:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
