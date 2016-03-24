//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKEAnimationEditor : NSObject
{
}

+ (id)animationWithPresetName:(unsigned long long)arg1;
+ (struct CGPath *)createPiecewiseLinearCurveWithAnimation:(id)arg1;
+ (struct CGPath *)createCubicBezierCurveFromCatmullRomCurve:(id)arg1;
+ (id)catmullRomCurveFromCubicBezierCurveWithPoint0:(struct CGPoint)arg1 controlPoint0:(struct CGPoint)arg2 controlPoint1Pre:(struct CGPoint)arg3 point1:(struct CGPoint)arg4 controlPoint1Post:(struct CGPoint)arg5 controlPoint2:(struct CGPoint)arg6 point2:(struct CGPoint)arg7;
+ (id)catmullRomCurveFromCubicBezierCurveWithPoint0:(struct CGPoint)arg1 controlPoint0:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 point1:(struct CGPoint)arg4;

@end

