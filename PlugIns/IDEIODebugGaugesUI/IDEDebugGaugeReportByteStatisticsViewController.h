//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class IDEDebugGaugeRoundChevronedView, NSTextField;

@interface IDEDebugGaugeReportByteStatisticsViewController : NSViewController
{
    IDEDebugGaugeRoundChevronedView *_chevronView;
    NSTextField *_rateField;
    NSTextField *_rateLabel;
    NSTextField *_totalField;
    NSTextField *_totalLabel;
}

@property(retain, nonatomic) NSTextField *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) NSTextField *totalField; // @synthesize totalField=_totalField;
@property(retain, nonatomic) NSTextField *rateLabel; // @synthesize rateLabel=_rateLabel;
@property(retain, nonatomic) NSTextField *rateField; // @synthesize rateField=_rateField;
@property(retain, nonatomic) IDEDebugGaugeRoundChevronedView *chevronView; // @synthesize chevronView=_chevronView;
- (void).cxx_destruct;
- (void)loadView;
- (id)init;

@end
