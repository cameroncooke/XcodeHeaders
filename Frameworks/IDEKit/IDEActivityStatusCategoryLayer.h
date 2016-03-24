//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTClickableLayer.h"

@class CALayer, DVTTextLayer, NSAttributedString, NSImage, NSString;

@interface IDEActivityStatusCategoryLayer : DVTClickableLayer
{
    NSAttributedString *_cachedAttributedCountString;
    DVTTextLayer *_textLayer;
    CALayer *_imageLayer;
    NSString *_statusTypeDisplayName;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy) NSString *statusTypeDisplayName; // @synthesize statusTypeDisplayName=_statusTypeDisplayName;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
@property(retain) NSImage *image;
- (void)sizeToFit;
- (double)_textLayerVerticalOffset;
- (void)layoutSublayers;
- (id)attributedCountString;
- (id)textAttributes;
- (id)init;

@end

