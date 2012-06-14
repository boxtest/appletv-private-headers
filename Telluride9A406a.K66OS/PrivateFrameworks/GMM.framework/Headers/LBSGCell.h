/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSGCell : PBCodable {
	int _lac;	// 4 = 0x4
	int _cellid;	// 8 = 0x8
	BOOL _hasMnc;	// 12 = 0xc
	int _mnc;	// 16 = 0x10
	BOOL _hasMcc;	// 20 = 0x14
	int _mcc;	// 24 = 0x18
	BOOL _hasRssi;	// 28 = 0x1c
	int _rssi;	// 32 = 0x20
	BOOL _hasAge;	// 36 = 0x24
	int _age;	// 40 = 0x28
	BOOL _hasTimingAdvance;	// 44 = 0x2c
	int _timingAdvance;	// 48 = 0x30
	BOOL _hasPrimaryScramblingCode;	// 52 = 0x34
	int _primaryScramblingCode;	// 56 = 0x38
}
@property(assign, nonatomic) int age;	// G=0x33aa97dd; S=0x33aa9801; @synthesize=_age
@property(assign, nonatomic) int cellid;	// G=0x33aa9e15; S=0x33aa9e25; @synthesize=_cellid
@property(assign, nonatomic) BOOL hasAge;	// G=0x33aa9e95; S=0x33aa9ea5; @synthesize=_hasAge
@property(assign, nonatomic) BOOL hasMcc;	// G=0x33aa9e55; S=0x33aa9e65; @synthesize=_hasMcc
@property(assign, nonatomic) BOOL hasMnc;	// G=0x33aa9e35; S=0x33aa9e45; @synthesize=_hasMnc
@property(assign, nonatomic) BOOL hasPrimaryScramblingCode;	// G=0x33aa9ed5; S=0x33aa9ee5; @synthesize=_hasPrimaryScramblingCode
@property(assign, nonatomic) BOOL hasRssi;	// G=0x33aa9e75; S=0x33aa9e85; @synthesize=_hasRssi
@property(assign, nonatomic) BOOL hasTimingAdvance;	// G=0x33aa9eb5; S=0x33aa9ec5; @synthesize=_hasTimingAdvance
@property(assign, nonatomic) int lac;	// G=0x33aa9df5; S=0x33aa9e05; @synthesize=_lac
@property(assign, nonatomic) int mcc;	// G=0x33aa9741; S=0x33aa9769; @synthesize=_mcc
@property(assign, nonatomic) int mnc;	// G=0x33aa96f5; S=0x33aa971d; @synthesize=_mnc
@property(assign, nonatomic) int primaryScramblingCode;	// G=0x33aa9ef5; S=0x33aa9871; @synthesize=_primaryScramblingCode
@property(assign, nonatomic) int rssi;	// G=0x33aa978d; S=0x33aa97b9; @synthesize=_rssi
@property(assign, nonatomic) int timingAdvance;	// G=0x33aa9825; S=0x33aa984d; @synthesize=_timingAdvance
// declared property getter: - (int)age;	// 0x33aa97dd
// declared property getter: - (int)cellid;	// 0x33aa9e15
- (void)dealloc;	// 0x33aa96c9
- (id)description;	// 0x33aa9895
- (id)dictionaryRepresentation;	// 0x33aa9905
// declared property getter: - (BOOL)hasAge;	// 0x33aa9e95
// declared property getter: - (BOOL)hasMcc;	// 0x33aa9e55
// declared property getter: - (BOOL)hasMnc;	// 0x33aa9e35
// declared property getter: - (BOOL)hasPrimaryScramblingCode;	// 0x33aa9ed5
// declared property getter: - (BOOL)hasRssi;	// 0x33aa9e75
// declared property getter: - (BOOL)hasTimingAdvance;	// 0x33aa9eb5
// declared property getter: - (int)lac;	// 0x33aa9df5
// declared property getter: - (int)mcc;	// 0x33aa9741
// declared property getter: - (int)mnc;	// 0x33aa96f5
// declared property getter: - (int)primaryScramblingCode;	// 0x33aa9ef5
- (BOOL)readFrom:(id)from;	// 0x33aa9b25
// declared property getter: - (int)rssi;	// 0x33aa978d
// declared property setter: - (void)setAge:(int)age;	// 0x33aa9801
// declared property setter: - (void)setCellid:(int)cellid;	// 0x33aa9e25
// declared property setter: - (void)setHasAge:(BOOL)age;	// 0x33aa9ea5
// declared property setter: - (void)setHasMcc:(BOOL)mcc;	// 0x33aa9e65
// declared property setter: - (void)setHasMnc:(BOOL)mnc;	// 0x33aa9e45
// declared property setter: - (void)setHasPrimaryScramblingCode:(BOOL)code;	// 0x33aa9ee5
// declared property setter: - (void)setHasRssi:(BOOL)rssi;	// 0x33aa9e85
// declared property setter: - (void)setHasTimingAdvance:(BOOL)advance;	// 0x33aa9ec5
// declared property setter: - (void)setLac:(int)lac;	// 0x33aa9e05
// declared property setter: - (void)setMcc:(int)mcc;	// 0x33aa9769
// declared property setter: - (void)setMnc:(int)mnc;	// 0x33aa971d
// declared property setter: - (void)setPrimaryScramblingCode:(int)code;	// 0x33aa9871
// declared property setter: - (void)setRssi:(int)rssi;	// 0x33aa97b9
// declared property setter: - (void)setTimingAdvance:(int)advance;	// 0x33aa984d
// declared property getter: - (int)timingAdvance;	// 0x33aa9825
- (void)writeTo:(id)to;	// 0x33aa9cbd
@end
