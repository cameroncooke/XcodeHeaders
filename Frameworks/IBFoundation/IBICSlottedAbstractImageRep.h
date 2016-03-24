//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@class NSData, NSValue;

@interface IBICSlottedAbstractImageRep : IBICSlottedAssetRep
{
    NSData *_assetData;
    NSValue *_imageDataPixelSize;
    BOOL _imageDataPixelSizeIsValid;
}

- (void).cxx_destruct;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (BOOL)hasPDFSibling;
- (BOOL)isPDF;
- (BOOL)isJPEG;
- (BOOL)isPNG;
@property(readonly) NSValue *imageDataPointSize;
@property(readonly) NSValue *imageDataPixelSize;
@property(readonly) NSValue *requiredPointSize;
@property(readonly) NSValue *requiredPixelSize;
- (id)slot;
- (void)assetDataWillChange;

@end
