//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSConditionLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet;

@interface MailboxesOutlineViewStateStorage : NSObject
{
    NSConditionLock *_shouldShowVariablesLock;	// 8 = 0x8
    unsigned long long _shouldShowVariablesToUpdate;	// 16 = 0x10
    unsigned long long _shouldShowVariablesToReset;	// 24 = 0x18
    BOOL _shouldShowOutbox;	// 32 = 0x20
    BOOL _shouldShowDrafts;	// 33 = 0x21
    BOOL _shouldShowTrash;	// 34 = 0x22
    BOOL _shouldShowJunk;	// 35 = 0x23
    BOOL _shouldShowFlags;	// 36 = 0x24
    BOOL _shouldShowArchive;	// 37 = 0x25
    BOOL _shouldShowVIPs;	// 38 = 0x26
    NSMutableSet *_visibleFlagMailboxes;	// 40 = 0x28
    id _firstUpdateLock;	// 48 = 0x30
    BOOL _firstUpdate;	// 56 = 0x38
    id _isListeningForVariablesLock;	// 64 = 0x40
    BOOL _isListeningForDocumentEditorNotifications;	// 72 = 0x48
    BOOL _isListeningForMessagesAdded;	// 73 = 0x49
    BOOL _isListeningForFlagUpdates;	// 74 = 0x4a
    id _sectionItemsLock;	// 80 = 0x50
    NSArray *_sectionItems;	// 88 = 0x58
    NSArray *_visibleSectionItems;	// 96 = 0x60
    NSArray *_visibleMailboxes;	// 104 = 0x68
    id _defaultSectionItemsLock;	// 112 = 0x70
    id _activityMonitorMailboxMapsLock;	// 120 = 0x78
    NSMutableDictionary *_mailboxesPerActivityMonitor;	// 128 = 0x80
    NSMutableDictionary *_activityMonitorsPerMailbox;	// 136 = 0x88
    NSMutableDictionary *_finishedActivityMonitorCountPerMailbox;	// 144 = 0x90
    NSConditionLock *_changedMailboxesLock;	// 152 = 0x98
    NSMutableSet *_changedMailboxes;	// 160 = 0xa0
    NSMutableSet *_activeAccounts;	// 168 = 0xa8
    NSArray *_draggedMailboxes;	// 176 = 0xb0
    NSSet *_observedTaskNames;	// 184 = 0xb8
    NSOperationQueue *_showVariablesUpdateQueue;	// 192 = 0xc0
}

+ (id)sharedInstance;	// IMP=0x000000010000bf9b
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001b9542
@property(readonly, nonatomic) NSOperationQueue *showVariablesUpdateQueue; // @synthesize showVariablesUpdateQueue=_showVariablesUpdateQueue;
@property(readonly, copy, nonatomic) NSSet *observedTaskNames; // @synthesize observedTaskNames=_observedTaskNames;
@property(retain) NSArray *draggedMailboxes; // @synthesize draggedMailboxes=_draggedMailboxes;
// - (void).cxx_destruct;	// IMP=0x00000001001ba622
- (BOOL)_archiveMessagesOrSubmailboxesExist;	// IMP=0x000000010001b132
@property(readonly, nonatomic) BOOL flagsExist;
@property(readonly, nonatomic) BOOL draftsExist;
- (void)_accountInitializedMailboxList:(id)arg1;	// IMP=0x00000001001ba4d8
- (id)copyActivityMonitorsForMailboxes:(id)arg1 finishedCount:(unsigned long long *)arg2;	// IMP=0x00000001001ba0ef
- (void)_postChangedMailboxesNotification;	// IMP=0x000000010002f854
- (void)_notifyChangedMailboxes;	// IMP=0x000000010002bb03
- (void)_setNeedsToNotifyChangedMailboxes:(id)arg1;	// IMP=0x000000010002b87c
- (void)_triggerChangedMailboxesNotification;	// IMP=0x000000010002ba99
- (BOOL)_removeActivityMonitor:(id)arg1 fromMailbox:(id)arg2;	// IMP=0x000000010002c237
- (BOOL)_addActivityMonitor:(id)arg1 toMailbox:(id)arg2;	// IMP=0x000000010002b786
- (id)_copyMailboxesForActivityMonitor:(id)arg1;	// IMP=0x000000010002b329
- (void)_monitoredActivityChanged:(id)arg1;	// IMP=0x000000010002ad61
- (id)_copyKeyForObject:(id)arg1;	// IMP=0x000000010002b2d0
@property BOOL shouldShowVIPs;
@property BOOL shouldShowArchive;
@property BOOL shouldShowFlags;
@property BOOL shouldShowJunk;
@property BOOL shouldShowTrash;
@property BOOL shouldShowDrafts;
@property BOOL shouldShowOutbox;
- (void)_setShouldShowVariable:(char *)arg1 withMask:(unsigned long long)arg2 to:(BOOL)arg3;	// IMP=0x000000010003e4f8
@property(readonly, copy) NSArray *visibleMailboxes;
@property(readonly, copy) NSArray *visibleSectionItems;
@property(readonly, copy) NSArray *sectionItems;
- (void)_mailboxDisplayCountChanged:(id)arg1;	// IMP=0x0000000100030587
- (void)_allViewersDidClose:(id)arg1;	// IMP=0x00000001000949b8
- (void)_mailboxListingDidChange:(id)arg1;	// IMP=0x000000010002ca44
- (void)_editorUserSaved:(id)arg1;	// IMP=0x00000001001b9ee3
- (void)_editorClosed:(id)arg1;	// IMP=0x000000010005dc1f
- (void)_viewerPreferencesChanged:(id)arg1;	// IMP=0x0000000100085817
- (void)_mailAccountsChanged:(id)arg1;	// IMP=0x000000010002df22
- (void)_handleOutboxCountChange;	// IMP=0x000000010006a64c
- (void)_outboxCountDidChange:(id)arg1;	// IMP=0x0000000100062a93
- (void)_deliveryFailureHappened:(id)arg1;	// IMP=0x00000001001b9ecc
- (void)_VIPsChanged:(id)arg1;	// IMP=0x000000010003e444
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x0000000100036599
- (void)_messagesWereAddedToMailboxes:(id)arg1;	// IMP=0x0000000100062b2b
- (void)moveSectionItem:(id)arg1 beforeItem:(id)arg2;	// IMP=0x00000001001b9b02
- (void)_updateSectionItemsWithNewlyVisibleFlagMailboxes:(id)arg1;	// IMP=0x000000010000ce2d
- (void)_writeVisibleFlagsMailboxesToDefaults;	// IMP=0x000000010001afe1
- (void)_readVisibleFlagsMailboxesFromDefaults;	// IMP=0x000000010000ddf7
- (void)_writeSectionItemsToDefaults;	// IMP=0x00000001001b99b1
- (void)_writeSectionItems:(id)arg1 toDefaultsWithKey:(id)arg2;	// IMP=0x00000001001b9716
- (void)_readSectionItemsFromDefaults;	// IMP=0x000000010000c7c6
- (id)_sectionItemsFromDefaultSectionItems:(id)arg1;	// IMP=0x000000010000cb39
- (void)_updateIsListeningForVariables;	// IMP=0x000000010000e204
- (void)_updateShouldShowVariables;	// IMP=0x000000010000e72e
- (void)_setNeedsToResetShouldShowVariablesWithMask:(unsigned long long)arg1;	// IMP=0x000000010000e020
- (void)_setNeedsToUpdateShouldShowVariablesWithMask:(unsigned long long)arg1;	// IMP=0x000000010002e1bf
- (void)_setShouldShowVariablesNeedUpdateWithUpdateMask:(unsigned long long)arg1 resetMask:(unsigned long long)arg2;	// IMP=0x000000010000e035
- (void)dealloc;	// IMP=0x00000001001b95fb
- (id)init;	// IMP=0x000000010000c054

@end

