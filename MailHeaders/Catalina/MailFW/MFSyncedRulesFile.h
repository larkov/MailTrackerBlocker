//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFSyncedFile.h>

@interface MFSyncedRulesFile : MFSyncedFile
{
}

+ (id)syncedRulesFile;	// IMP=0x0000000000230a7a
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;	// IMP=0x0000000000231114
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;	// IMP=0x0000000000230b0b
- (void)writeRules:(id)arg1;	// IMP=0x0000000000230af4
- (id)readRules;	// IMP=0x0000000000230ae0

@end
