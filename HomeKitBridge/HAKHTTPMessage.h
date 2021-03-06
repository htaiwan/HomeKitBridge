//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSData, NSDate, NSDictionary, NSString;

@interface HAKHTTPMessage : NSObject
{
    struct __CFHTTPMessage *_message;
    BOOL _encrypted;
}

+ (id)dateFormatter;
@property(nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) unsigned long long contentLength;
- (id)serialize;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSData *body;
- (id)fieldValueForFieldName:(id)arg1;
@property(readonly, nonatomic) NSDictionary *allHeaderFields;
- (void)appendData:(id)arg1;
@property(readonly, nonatomic) BOOL isHeaderComplete;
- (id)description;
- (void)dealloc;
@property(readonly, nonatomic) NSData *tlv8Data;
@property(readonly, nonatomic) id JSONObject;

@end

