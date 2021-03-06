//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MCFormatFlowedSupport)
+ (id)stringFromMimeEnrichedString:(id)arg1;	// IMP=0x000000000006ecee
+ (id)htmlStringFromMimeEnrichedString:(id)arg1;	// IMP=0x000000000006ec63
+ (id)htmlStringFromMimeRichTextString:(id)arg1;	// IMP=0x000000000006ebd8
+ (id)contentIDStringFromCidUrl:(id)arg1;	// IMP=0x000000000002a863
+ (id)messageIDStringWithDomainHint:(id)arg1;	// IMP=0x000000000001e095
+ (id)htmlForAttachmentWithContentID:(id)arg1;	// IMP=0x00000000000892a2
+ (id)htmlForAttachment:(id)arg1;	// IMP=0x000000000008923c
+ (id)newURLForContentID:(id)arg1 percentEscaped:(BOOL)arg2;	// IMP=0x000000000001e283
- (id)convertFromFlowedText:(unsigned long long)arg1;	// IMP=0x000000000000d6e0
- (id)bestMimeCharsetUsingHint:(unsigned long long)arg1;	// IMP=0x000000000002e0dc
- (id)decodeMimeMessageIDList;	// IMP=0x0000000000071c89
- (id)decodeMimeAddressList;	// IMP=0x0000000000071a7d
- (id)decodeMimeHeaderValueWithCharsetHint:(id)arg1 detectOtherEncodings:(BOOL)arg2 fromWindows:(BOOL)arg3;	// IMP=0x000000000001d29c
- (id)encodedHeaderDataWithKey:(id)arg1 encodingHint:(unsigned long long)arg2;	// IMP=0x0000000000071506
- (id)stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x00000000000895c5
- (id)stringByReplacingNonBreakingSpacesWithString:(id)arg1;	// IMP=0x000000000002dff5
- (id)newStringByApplyingBodyClassName:(id)arg1;	// IMP=0x000000000000e0e5
- (id)stringByApplyingBodyClassName:(id)arg1;	// IMP=0x000000000001e480
- (id)stringByReplacingString:(id)arg1 withString:(id)arg2;	// IMP=0x0000000000004452
- (long long)caseInsensitiveCompareExcludingXDash:(id)arg1;	// IMP=0x0000000000010a6c
- (BOOL)isEqualToStringIgnoringCase:(id)arg1;	// IMP=0x00000000000027cb
- (BOOL)isEqualToStringIgnoreCaseAndDiacritics:(id)arg1;	// IMP=0x000000000008959b
@property(readonly, copy, nonatomic) NSString *stringSuitableForHTML;
@end

