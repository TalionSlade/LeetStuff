class Solution {
    
    public boolean isValidIPv4(String s){
        if(s.contains(":") || s.startsWith(".") || s.endsWith(".")){
            return false;
        }
        String[] parts = s.split("\\.");
        if(parts.length != 4){
            return false;
        }
        for(String part: parts){
            if(part.length() == 0){
                return false;
            }
            try{
                int numpart = Integer.parseInt(part);
                if(numpart < 0 || numpart > 255){
                    return false;
                }
            } catch(Exception e){
                return false;
            }
            
            if(part.length() > 1 && (part.startsWith("0") || part.startsWith("00") || part.startsWith("000"))){
                return false;
            }
        }
        return true;
    }
    
    public boolean isValidIPv6(String s){
        if(s.contains(".") || s.startsWith(":") || s.endsWith(":")){
            return false;
        }
        String[] parts = s.split(":");
        if(parts.length != 8){
            return false;
        }
        for(String part: parts){
            if(part.length() == 0 || part.length() > 4){
                return false;
            }
            for(char ch: part.toCharArray()){
                if(Character.isAlphabetic(ch) && Character.isUpperCase(ch) && ch > 'F'){
                    return false;
                }
                if(Character.isAlphabetic(ch) && Character.isLowerCase(ch) && ch > 'f'){
                    return false;
                }
            }
        }
        return true;
    }
    
    public String validIPAddress(String queryIP) {
        if(isValidIPv4(queryIP)){
            return "IPv4";
        }
        if(isValidIPv6(queryIP)){
            return "IPv6";
        }
        return "Neither";
    }
}