//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UXFlowLayoutInfo : NSObject
{
    NSMutableArray *_sections;
    BOOL _useFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    double _dimension;
    BOOL _isValid;
    NSDictionary *_rowAlignmentOptions;
    BOOL _usesFloatingHeaderFooter;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) NSDictionary *rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) BOOL leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) BOOL horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(nonatomic) BOOL usesFloatingHeaderFooter; // @synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (id)copy;
- (id)snapshot;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)addSection;
- (void)invalidate:(BOOL)arg1;
- (id)init;

@end

