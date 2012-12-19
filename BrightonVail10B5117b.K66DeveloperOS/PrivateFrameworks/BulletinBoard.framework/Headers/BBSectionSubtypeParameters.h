/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSSet;

@interface BBSectionSubtypeParameters : NSObject {
	BBSectionSubtypeParameters *_fallbackParameters;	// 4 = 0x4
	NSString *_topic;	// 8 = 0x8
	NSString *_missedBannerDescriptionFormat;	// 12 = 0xc
	NSString *_fullUnlockActionLabel;	// 16 = 0x10
	NSString *_unlockActionLabel;	// 20 = 0x14
	NSSet *_alertSuppressionAppIDs;	// 24 = 0x18
	NSNumber *_boxedCoalescesWhenLocked;	// 28 = 0x1c
	NSNumber *_boxedSuppressesMessageForPrivacy;	// 32 = 0x20
	NSNumber *_boxedRealertCount;	// 36 = 0x24
	NSNumber *_boxedInertWhenLocked;	// 40 = 0x28
	NSNumber *_boxedPreservesUnlockActionCase;	// 44 = 0x2c
	NSNumber *_boxedBannerShowsSubtitle;	// 48 = 0x30
	NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;	// 52 = 0x34
	NSNumber *_boxedSubtypePriority;	// 56 = 0x38
	NSNumber *_boxedIPodOutAlertType;	// 60 = 0x3c
}
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x33726d05; S=0x33727745; @synthesize=_alertSuppressionAppIDs
@property(assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x33726e89; S=0x337270bd; 
@property(retain, nonatomic) NSNumber *boxedBannerShowsSubtitle;	// G=0x337277f5; S=0x33727805; @synthesize=_boxedBannerShowsSubtitle
@property(retain, nonatomic) NSNumber *boxedCoalescesWhenLocked;	// G=0x33727755; S=0x33727765; @synthesize=_boxedCoalescesWhenLocked
@property(retain, nonatomic) NSNumber *boxedIPodOutAlertType;	// G=0x33727855; S=0x33727865; @synthesize=_boxedIPodOutAlertType
@property(retain, nonatomic) NSNumber *boxedInertWhenLocked;	// G=0x337277b5; S=0x337277c5; @synthesize=_boxedInertWhenLocked
@property(retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase;	// G=0x337277d5; S=0x337277e5; @synthesize=_boxedPreservesUnlockActionCase
@property(retain, nonatomic) NSNumber *boxedRealertCount;	// G=0x33727795; S=0x337277a5; @synthesize=_boxedRealertCount
@property(retain, nonatomic) NSNumber *boxedSubtypePriority;	// G=0x33727835; S=0x33727845; @synthesize=_boxedSubtypePriority
@property(retain, nonatomic) NSNumber *boxedSuppressesMessageForPrivacy;	// G=0x33727775; S=0x33727785; @synthesize=_boxedSuppressesMessageForPrivacy
@property(retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture;	// G=0x33727815; S=0x33727825; @synthesize=_boxedVisuallyIndicatesWhenDateIsInFuture
@property(assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x33726d39; S=0x33726f91; 
@property(assign, nonatomic) BBSectionSubtypeParameters *fallbackParameters;	// G=0x337276e5; S=0x337276f5; @synthesize=_fallbackParameters
@property(copy, nonatomic) NSString *fullUnlockActionLabel;	// G=0x33726c9d; S=0x33727725; @synthesize=_fullUnlockActionLabel
@property(assign, nonatomic) int iPodOutAlertType;	// G=0x33726f51; S=0x33727171; 
@property(assign, nonatomic) BOOL inertWhenLocked;	// G=0x33726e01; S=0x33727045; 
@property(copy, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x33726c69; S=0x33727715; @synthesize=_missedBannerDescriptionFormat
@property(assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x33726e45; S=0x33727081; 
@property(assign, nonatomic) unsigned realertCount;	// G=0x33726dc1; S=0x33727009; 
@property(assign, nonatomic) unsigned subtypePriority;	// G=0x33726f11; S=0x33727135; 
@property(assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x33726d7d; S=0x33726fcd; 
@property(copy, nonatomic) NSString *topic;	// G=0x33726c35; S=0x33727705; @synthesize=_topic
@property(copy, nonatomic) NSString *unlockActionLabel;	// G=0x33726cd1; S=0x33727735; @synthesize=_unlockActionLabel
@property(assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x33726ecd; S=0x337270f9; 
- (id)initWithCoder:(id)coder;	// 0x337271ad
- (id)initWithFallbackParameters:(id)fallbackParameters;	// 0x33726a99
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x33726d05
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x33726e89
// declared property getter: - (id)boxedBannerShowsSubtitle;	// 0x337277f5
// declared property getter: - (id)boxedCoalescesWhenLocked;	// 0x33727755
// declared property getter: - (id)boxedIPodOutAlertType;	// 0x33727855
// declared property getter: - (id)boxedInertWhenLocked;	// 0x337277b5
// declared property getter: - (id)boxedPreservesUnlockActionCase;	// 0x337277d5
// declared property getter: - (id)boxedRealertCount;	// 0x33727795
// declared property getter: - (id)boxedSubtypePriority;	// 0x33727835
// declared property getter: - (id)boxedSuppressesMessageForPrivacy;	// 0x33727775
// declared property getter: - (id)boxedVisuallyIndicatesWhenDateIsInFuture;	// 0x33727815
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x33726d39
- (void)dealloc;	// 0x33726ae1
- (void)encodeWithCoder:(id)coder;	// 0x33727489
// declared property getter: - (id)fallbackParameters;	// 0x337276e5
// declared property getter: - (id)fullUnlockActionLabel;	// 0x33726c9d
// declared property getter: - (int)iPodOutAlertType;	// 0x33726f51
// declared property getter: - (BOOL)inertWhenLocked;	// 0x33726e01
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x33726c69
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x33726e45
// declared property getter: - (unsigned)realertCount;	// 0x33726dc1
// declared property setter: - (void)setAlertSuppressionAppIDs:(id)ids;	// 0x33727745
// declared property setter: - (void)setBannerShowsSubtitle:(BOOL)subtitle;	// 0x337270bd
// declared property setter: - (void)setBoxedBannerShowsSubtitle:(id)subtitle;	// 0x33727805
// declared property setter: - (void)setBoxedCoalescesWhenLocked:(id)locked;	// 0x33727765
// declared property setter: - (void)setBoxedIPodOutAlertType:(id)type;	// 0x33727865
// declared property setter: - (void)setBoxedInertWhenLocked:(id)locked;	// 0x337277c5
// declared property setter: - (void)setBoxedPreservesUnlockActionCase:(id)aCase;	// 0x337277e5
// declared property setter: - (void)setBoxedRealertCount:(id)count;	// 0x337277a5
// declared property setter: - (void)setBoxedSubtypePriority:(id)priority;	// 0x33727845
// declared property setter: - (void)setBoxedSuppressesMessageForPrivacy:(id)privacy;	// 0x33727785
// declared property setter: - (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)future;	// 0x33727825
// declared property setter: - (void)setCoalescesWhenLocked:(BOOL)locked;	// 0x33726f91
// declared property setter: - (void)setFallbackParameters:(id)parameters;	// 0x337276f5
// declared property setter: - (void)setFullUnlockActionLabel:(id)label;	// 0x33727725
// declared property setter: - (void)setIPodOutAlertType:(int)type;	// 0x33727171
// declared property setter: - (void)setInertWhenLocked:(BOOL)locked;	// 0x33727045
// declared property setter: - (void)setMissedBannerDescriptionFormat:(id)format;	// 0x33727715
// declared property setter: - (void)setPreservesUnlockActionCase:(BOOL)aCase;	// 0x33727081
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x33727009
// declared property setter: - (void)setSubtypePriority:(unsigned)priority;	// 0x33727135
// declared property setter: - (void)setSuppressesMessageForPrivacy:(BOOL)privacy;	// 0x33726fcd
// declared property setter: - (void)setTopic:(id)topic;	// 0x33727705
// declared property setter: - (void)setUnlockActionLabel:(id)label;	// 0x33727735
// declared property setter: - (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)future;	// 0x337270f9
// declared property getter: - (unsigned)subtypePriority;	// 0x33726f11
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x33726d7d
// declared property getter: - (id)topic;	// 0x33726c35
// declared property getter: - (id)unlockActionLabel;	// 0x33726cd1
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x33726ecd
@end
