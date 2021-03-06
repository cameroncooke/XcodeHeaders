//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGLineGeometry.h>

#import "DBGConstraintGeometry.h"

@class NSColor, NSString;

@interface DBGConstraintLineGeometry : DBGLineGeometry <DBGConstraintGeometry>
{
    int _appearence;
    int _style;
    NSColor *_lineColorNormal;
    NSColor *_lineColorHighlighted;
    NSColor *_lineColorSelected;
}

+ (id)constraintLineGeometryWithStart:(id)arg1 end:(id)arg2 view:(id)arg3 readsFromDepthBuffer:(BOOL)arg4 writesToDepthBuffer:(BOOL)arg5;
@property(retain) NSColor *lineColorSelected; // @synthesize lineColorSelected=_lineColorSelected;
@property(retain) NSColor *lineColorHighlighted; // @synthesize lineColorHighlighted=_lineColorHighlighted;
@property(retain) NSColor *lineColorNormal; // @synthesize lineColorNormal=_lineColorNormal;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property int style; // @synthesize style=_style;
@property int appearence; // @synthesize appearence=_appearence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property double opacity;
@property(readonly) Class superclass;

@end

