package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ClearingFeeIndicator extends StringField 
{ 
  public static final int FIELD = 635; 

  public ClearingFeeIndicator() 
  { 
    super(635);
  } 
  public ClearingFeeIndicator(String data) 
  { 
    super(635, data);
  } 
} 
