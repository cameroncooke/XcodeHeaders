//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSString;

@interface IBCustomViewDrawingDescription : NSObject <IBBinaryArchiving>
{
    id <IBBinaryArchivableColor> _customViewDarkTexturedBorderColor;
    id <IBBinaryArchivableColor> _customViewDarkBorderColor;
    id <IBBinaryArchivableColor> _customViewLightBorderColor;
    id <IBBinaryArchivableColor> _containerCustomViewBackgroundColor;
    id <IBBinaryArchivableColor> _childlessCustomViewBackgroundColor;
    id <IBBinaryArchivableColor> _containerCustomViewTextColor;
    id <IBBinaryArchivableColor> _childlessCustomViewTextColor;
    double _borderThickness;
}

@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
@property(retain, nonatomic) id <IBBinaryArchivableColor> childlessCustomViewTextColor; // @synthesize childlessCustomViewTextColor=_childlessCustomViewTextColor;
@property(retain, nonatomic) id <IBBinaryArchivableColor> containerCustomViewTextColor; // @synthesize containerCustomViewTextColor=_containerCustomViewTextColor;
@property(retain, nonatomic) id <IBBinaryArchivableColor> childlessCustomViewBackgroundColor; // @synthesize childlessCustomViewBackgroundColor=_childlessCustomViewBackgroundColor;
@property(retain, nonatomic) id <IBBinaryArchivableColor> containerCustomViewBackgroundColor; // @synthesize containerCustomViewBackgroundColor=_containerCustomViewBackgroundColor;
@property(retain, nonatomic) id <IBBinaryArchivableColor> customViewLightBorderColor; // @synthesize customViewLightBorderColor=_customViewLightBorderColor;
@property(retain, nonatomic) id <IBBinaryArchivableColor> customViewDarkBorderColor; // @synthesize customViewDarkBorderColor=_customViewDarkBorderColor;
@property(retain, nonatomic) id <IBBinaryArchivableColor> customViewDarkTexturedBorderColor; // @synthesize customViewDarkTexturedBorderColor=_customViewDarkTexturedBorderColor;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

