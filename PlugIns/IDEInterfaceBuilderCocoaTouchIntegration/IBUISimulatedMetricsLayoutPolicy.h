//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBUISimulatedMetricsContainer, IBUISimulatedMetricsLayout, NSObject<IBUISimulatedMetricsExtendedEdgeProvider>;

@interface IBUISimulatedMetricsLayoutPolicy : NSObject
{
    IBUISimulatedMetricsLayout *_statusBarLayout;
    IBUISimulatedMetricsLayout *_topBarLayout;
    IBUISimulatedMetricsLayout *_bottomBarLayout;
    IBUISimulatedMetricsContainer *_simulatedMetricsContainer;
    IBUISimulatedMetricsLayoutPolicy *_parentLayoutPolicy;
    NSObject<IBUISimulatedMetricsExtendedEdgeProvider> *_extendedEdgeProvider;
}

@property(readonly, nonatomic) __weak NSObject<IBUISimulatedMetricsExtendedEdgeProvider> *extendedEdgeProvider; // @synthesize extendedEdgeProvider=_extendedEdgeProvider;
@property(readonly, nonatomic) IBUISimulatedMetricsLayoutPolicy *parentLayoutPolicy; // @synthesize parentLayoutPolicy=_parentLayoutPolicy;
@property(readonly, nonatomic) IBUISimulatedMetricsContainer *simulatedMetricsContainer; // @synthesize simulatedMetricsContainer=_simulatedMetricsContainer;
- (void).cxx_destruct;
- (void)enumerateLayoutMetricsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) IBUISimulatedMetricsLayout *bottomBarLayout;
@property(readonly, nonatomic) IBUISimulatedMetricsLayout *topBarLayout;
@property(readonly, nonatomic) IBUISimulatedMetricsLayout *statusBarLayout;
- (double)contentViewOffsetFromBottom;
- (double)contentViewOffsetFromTop;
- (struct CGSize)simulatedSizeForContentViewSize:(struct CGSize)arg1;
- (struct CGRect)contentViewFrame;
- (struct CGSize)simulatedSize;
- (id)initWithContainer:(id)arg1 extendedEdgeProvider:(id)arg2;
- (id)initWithContainer:(id)arg1 extendedEdgeProvider:(id)arg2 parentLayoutPolicy:(id)arg3;

@end

