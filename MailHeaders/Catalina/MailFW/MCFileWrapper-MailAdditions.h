//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCFileWrapper.h>

@interface MCFileWrapper (MailAdditions)
- (void)setPreferredFilename:(id)arg1;	// IMP=0x00000000000037af
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000003543
- (id)sharedKeySetForQuarantineProperties;	// IMP=0x000000000000341a
- (void)configureWithMessage:(id)arg1 headers:(id)arg2;	// IMP=0x000000000000279d
@property(nonatomic) long long attachmentMailboxType;
@end
