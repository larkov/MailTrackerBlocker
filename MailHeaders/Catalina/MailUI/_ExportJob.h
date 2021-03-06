//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPrintInfo, NSString;

@interface _ExportJob : NSObject
{
    BOOL _shouldCollapseRedundantText;	// 8 = 0x8
    NSArray *_conversationMembers;	// 16 = 0x10
    NSMutableArray *_printingHTMLs;	// 24 = 0x18
    NSMutableArray *_attachments;	// 32 = 0x20
    NSString *_jobTitle;	// 40 = 0x28
    NSPrintInfo *_printInfo;	// 48 = 0x30
    unsigned long long _sequenceNumber;	// 56 = 0x38
}

@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSMutableArray *printingHTMLs; // @synthesize printingHTMLs=_printingHTMLs;
@property(nonatomic) BOOL shouldCollapseRedundantText; // @synthesize shouldCollapseRedundantText=_shouldCollapseRedundantText;
@property(retain, nonatomic) NSArray *conversationMembers; // @synthesize conversationMembers=_conversationMembers;
// - (void).cxx_destruct;	// IMP=0x00000001002594dd
- (id)init;	// IMP=0x000000010025939a

@end

