//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

@class DVTBorderedView, DVTLozengeTextField, NSTextField;

@interface XCSLegacyBotEditor : IDEEditor
{
    DVTBorderedView *_borderedView;
    NSTextField *_textField;
    DVTLozengeTextField *_lozenge;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property __weak DVTLozengeTextField *lozenge; // @synthesize lozenge=_lozenge;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)loadView;

@end

