/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSAttachment : ICSProperty {
}
@property(retain) NSString *fmtype;	// G=0x365394a1; S=0x365394c1; 
@property(retain) NSString *managed_filename;	// G=0x36539589; S=0x365395a9; 
@property(retain) NSString *managed_id;	// G=0x36539461; S=0x36539481; 
@property(assign) int size;	// G=0x365393cd; S=0x3653940d; 
@property(assign) BOOL x_apple_autoarchived;	// G=0x365394e1; S=0x36539515; 
@property(retain) NSString *x_apple_ews_attachmentid;	// G=0x36539609; S=0x36539629; 
@property(retain) NSString *x_apple_filename;	// G=0x365395c9; S=0x365395e9; 
- (id)initWithData:(id)data;	// 0x365392a9
- (id)initWithURL:(id)url;	// 0x36539275
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3653e155
- (id)filename;	// 0x36539301
// declared property getter: - (id)fmtype;	// 0x365394a1
- (BOOL)isBinary;	// 0x365392dd
// declared property getter: - (id)managed_filename;	// 0x36539589
// declared property getter: - (id)managed_id;	// 0x36539461
- (void)setData:(id)data;	// 0x36539649
// declared property setter: - (void)setFmtype:(id)fmtype;	// 0x365394c1
// declared property setter: - (void)setManaged_filename:(id)filename;	// 0x365395a9
// declared property setter: - (void)setManaged_id:(id)anId;	// 0x36539481
// declared property setter: - (void)setSize:(int)size;	// 0x3653940d
- (void)setURL:(id)url;	// 0x365396ed
// declared property setter: - (void)setX_apple_autoarchived:(BOOL)autoarchived;	// 0x36539515
// declared property setter: - (void)setX_apple_ews_attachmentid:(id)attachmentid;	// 0x36539629
// declared property setter: - (void)setX_apple_filename:(id)filename;	// 0x365395e9
// declared property getter: - (int)size;	// 0x365393cd
// declared property getter: - (BOOL)x_apple_autoarchived;	// 0x365394e1
// declared property getter: - (id)x_apple_ews_attachmentid;	// 0x36539609
// declared property getter: - (id)x_apple_filename;	// 0x365395c9
@end

