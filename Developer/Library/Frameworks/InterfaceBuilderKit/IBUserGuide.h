//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBLayoutGuide.h>

#import "NSCoding.h"

@class NSView;

@interface IBUserGuide : IBLayoutGuide <NSCoding>
{
    NSView *view;
    unsigned long long affinity;
    double location;
    BOOL dragging;
}

- (void)drawInView:(id)arg1;
- (void)trackWithLeftMouseDownEvent:(id)arg1;
- (id)view;
- (struct CGRect)maxTipRect;
- (struct CGRect)minTipRect;
- (struct CGRect)placementTipRect;
- (struct CGSize)tipSize;
- (id)maxTip;
- (id)minTip;
- (id)attributedTip:(id)arg1;
- (double)distanceFromMaxEdge;
- (double)distanceFromMinEdge;
- (BOOL)isVisible;
- (unsigned long long)affinity;
- (void)setAffinity:(unsigned long long)arg1;
- (struct CGRect)rect;
- (struct CGPoint)end;
- (struct CGPoint)start;
- (void)setLocation:(double)arg1;
- (double)location;
- (id)document;
- (BOOL)isVertical;
- (struct CGRect)windowFrame;
- (void)invalidate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 location:(double)arg2 andAffinity:(unsigned long long)arg3;

@end

