/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSMutableArray;

@interface CPMessageEntry : NSObject {
	int m_timeStamp;	// 4 = 0x4
	int m_tag;	// 8 = 0x8
	NSString *m_text;	// 12 = 0xc
	NSArray *m_parameters;	// 16 = 0x10
	NSMutableArray *m_affectedObjects;	// 20 = 0x14
	int m_count;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *affectedObjects;	// G=0x349fcd61; converted property
@property(assign, nonatomic) int timeStamp;	// G=0x349fced5; S=0x349fcee5; @synthesize=m_timeStamp
+ (void)initialize;	// 0x3494b515
- (id)initWithTag:(int)tag affectedObject:(id)object text:(id)text parameters:(void *)parameters;	// 0x3494b579
- (void)addAffectedObject:(id)object;	// 0x3494b6f9
// converted property getter: - (id)affectedObjects;	// 0x349fcd61
- (void)dealloc;	// 0x3494b8f5
- (id)description;	// 0x349fcda9
- (int)getCount;	// 0x349fcd71
- (int)getMessageTag;	// 0x349fccd9
- (id)getMessageText;	// 0x349fcce9
- (id)getParameter:(unsigned)parameter;	// 0x349fcd19
- (int)getParameterCount;	// 0x349fccf9
- (unsigned)hash;	// 0x349fcca5
- (BOOL)isEqual:(id)equal;	// 0x349fcbfd
- (void)logWithCat:(id)cat;	// 0x349fcda5
- (void)mergeEntries:(id)entries;	// 0x349fce15
// declared property setter: - (void)setTimeStamp:(int)stamp;	// 0x349fcee5
// declared property getter: - (int)timeStamp;	// 0x349fced5
- (int)timeStampCompare:(id)compare;	// 0x349fcd81
@end

