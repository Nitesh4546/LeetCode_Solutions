class Solution(object):
    def complexNumberMultiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        rel1, img1 = map(int, num1[:-1].split('+'))
        rel2, img2 = map(int, num2[:-1].split('+'))
        real = (rel1*rel2)-(img1*img2)
        img = (rel1*img2)+(img1*rel2)
        return str(real)+"+"+str(img)+"i"