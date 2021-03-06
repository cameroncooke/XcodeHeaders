//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSObject<IBAutolayoutItem>, NSString;

@interface IBAutolayoutMisplacementStatus : NSObject <IBBinaryArchiving>
{
    NSObject<IBAutolayoutItem> *_view;
    struct CGRect _expectedLayoutFrameOrBounds;
    struct CGRect _actualLayoutFrameOrBounds;
}

@property(readonly, nonatomic) struct CGRect actualLayoutFrameOrBounds; // @synthesize actualLayoutFrameOrBounds=_actualLayoutFrameOrBounds;
@property(readonly, nonatomic) struct CGRect expectedLayoutFrameOrBounds; // @synthesize expectedLayoutFrameOrBounds=_expectedLayoutFrameOrBounds;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)misplacementStatusByIgnoringSize;
- (id)misplacementStatusByIgnoringPosition;
- (BOOL)isEqualToMisplacementStatus:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasAnyMisplacement;
- (BOOL)hasMisplacedSizeInOrientation:(unsigned long long)arg1;
- (BOOL)hasMisplacedPositionInOrientation:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasMisplacedVerticalSize;
@property(readonly, nonatomic) BOOL hasMisplacedHorizontalSize;
@property(readonly, nonatomic) BOOL hasMisplacedVerticalPosition;
@property(readonly, nonatomic) BOOL hasMisplacedHorizontalPosition;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithView:(id)arg1 expectedLayoutFrameOrBounds:(struct CGRect)arg2 actualLayoutFrameOrBounds:(struct CGRect)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

