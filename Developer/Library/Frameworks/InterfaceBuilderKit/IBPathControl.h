//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPathControl.h"

@class IBConnectionInterfaceStyle, NSColor;

@interface IBPathControl : NSPathControl
{
    IBConnectionInterfaceStyle *interfaceStyle;
    NSColor *backgroundColor;
    BOOL canSelectLastComponent;
    BOOL isSelectable;
}

+ (Class)cellClass;
- (void)setLabels:(id)arg1 images:(id)arg2 representedObjects:(id)arg3;
- (void)windowDidResignKey:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setInterfaceStyle:(id)arg1;
- (id)interfaceStyle;
- (void)setCanSelectLastComponent:(BOOL)arg1;
- (BOOL)canSelectLastComponent;
- (void)setSelectable:(BOOL)arg1;
- (BOOL)isSelectable;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

